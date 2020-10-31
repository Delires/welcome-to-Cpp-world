/**
深拷贝与浅拷贝  (经典面试问题)
1.深浅是从对象的生命周期上区分的
2.浅拷贝：简单的赋值拷贝操作
  深拷贝：在堆区重新申请空间，进行拷贝操作

这时候析构函数就有用了,在堆开辟的空间,在析构里结束生命，但这样写又不是很对
①拷贝函数是原封不动的逐字节拷贝 Person p2(p1);就把p1的内容逐字节拷贝给p2
②这是p2.m_Age == p1.m_Age  p2.m_High == p1.m_High
③由于栈的先入后出原则,先创建p1后p2,析构的时候先析构p2后p1
④但由于m_High是一个指针,所以p1.m_High和p2.m_High都指向一块内存。不像p1.m_Age p2.m_Age有各自的内存
⑤栈先入后出,先用delete释放p2.m_High指向的那片堆区,然后再用delete释放p1.m_High指向的那片堆区
 可他俩都指向同一堆区,p2.m_High已经把那个堆区释放了,p1.m_High就没得释放，因此就会产生重复释放的问题!!
如何解决?
①这就是深拷贝和浅拷贝区别, 必须要自己写拷贝结构函数来解决浅拷贝带来的问题
②申请两块堆区,p1.m_High指向他的堆区   p2.m_High指向他的堆区
③这样析构堆区时就不会发生问题了
**/

#include "iostream"
using namespace std;
#define MYSELF 0
#if MYSELF
class Person
{
public:
    Person()
    {
        cout << "无参/默认构造函数调用:Person()"<<endl;
    }
    Person(int age, float high)
    {
        m_Age = age;
        m_High = new float(high); //把high输入的值new'开辟一个空间放到堆区 new输出一个指针
          //同类型指针接收
        cout << "有参构造函数调用:Person(int age)"<<endl;
    }
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        //m_High = p.m_High; 编译器默认的操作,在释放堆区会出问题
    ///深拷贝操作:
        m_High = new float(*p.m_High);
                            //*p.m_High:把传来的指针解引用出来值,new float(*p.m_High)：然后用这个值开辟新的堆再指针指向
        cout << "拷贝构造函数调用:Person(const Person &p))"<<endl;
    }

    ~Person()
    {
        if(m_High != NULL) //m_High指向new开辟的堆空间,因此释放也要释放m_High
        {
            delete(m_High);
            m_High = NULL;
        }
        cout << "析构函数调用:~Person()"<<endl;
    }

public:
    int m_Age;
    float *m_High;

};

void test01()
{
    Person p1(18, 185);
    cout<< "p1的年龄是:"<<p1.m_Age<<"  p1的身高是:"<<*p1.m_High<<endl;

    Person p2(p1); //没写拷贝构造函数,系统会自动给我们写一个
    cout<< "p2的年龄是:"<<p2.m_Age<<"  p2的身高是:"<<*p2.m_High<<endl;

    ///new开辟堆区后 要delete(指针) point=NULL 函数执行完要析构,把释放堆区写到析构函数里
}


int main(void)
{
    test01();


    cout<<"\r\n\r\n输入任意字符结束函数\r\n"<<endl;
    cin.get();
    return 0;
}
#else

class Car
{
public:
    Car()
    {
         cout << "无参/默认构造函数调用:Car())"<<endl;
    }
    Car( float lon, float pri)
    {
        c_Long = lon;
        c_price = new float(pri);//把传来的pri放在堆区
        //c_price = &pri; //把传来的数据通过指针传递在栈区
        cout << "有参构造函数调用:Car(float lon, float pri)"<<endl;
    }
    Car(const Car &p)//拷贝构造函数
    {
        c_Long = p.c_Long;
        //c_price = p.c_price; //这种指针直接传递的“浅拷贝”会在delet堆区时出错
        c_price = new float(*p.c_price);//把堆区的值取出再开辟一个堆区存放,delete不会出错
        cout << "拷贝构造函数调用:Car(const Car &p)"<<endl;
    }


    ~Car()//析构函数没有参数值
    {
        if(c_price != NULL)
        {
            delete(c_price); //把开辟的堆销毁。拷贝函数拷贝了两个堆,析构不会出现堆重复释放的问题
            c_price = NULL;
        }
        cout << "析构函数调用:~Person()"<<endl;
    }


public:
    float c_Long;
    float *c_price;


};

int main(void)
{//括号法赋值
    Car c1(210, 28000);
    Car c2(c1); //拷贝
    cout<< "c1的long为"<< c1.c_Long <<
    "  c1的price的地址为" <<c1.c_price<<"  c1的price的为" <<*c1.c_price<<endl;
    cout<< "c2的long为"<< c2.c_Long <<
    "  c2的price的地址为" <<c2.c_price<<"  c2的price的为" <<*c2.c_price<<endl;

    cout<< "\r\n明显看到c1.c_price和c2.c_price的地址不同,因为是深拷贝.new开辟堆用指针来进行赋值的方式"<<endl;
    cout<< "由于栈先入后出,先析构c2后c1,因二者的price堆地址不同,因此不会出现堆重复释放的问题"<<endl;

    cout<< "\r\n\r\n输入任意字符结束\r\n"<<endl;
    cin.get();
    return 0;
}

#endif
/**
SUMMERIZE:
浅拷贝:编译器自动设置的拷贝函数/我们写的 这种简单的进行赋值的拷贝
深拷贝:就是在拷贝函数中,new开辟堆用指针来进行赋值的方式.记得在析构函数里delete堆
注意:如果属性有在堆开辟,一定要自己提供拷贝函数，防止浅拷贝带来问题
**/

