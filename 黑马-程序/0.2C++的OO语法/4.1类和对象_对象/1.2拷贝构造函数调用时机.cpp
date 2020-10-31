/**
拷贝构造函数调用时机,拷贝构造函数在什么时候有用呢?
1.使用一个已经构造的对象来初始化另一个对象(用拷贝构造函数初始化)
2.以值传递的方式给函数传值(值传递传递一个对象,会自动调用拷贝构造函数,因为值传递本质就是复制一个副本)
3.以值方式返回局部对象(函数在运行完局部变量会销毁掉,返回的值其实是把局部变量赋值了一遍再返回)
**/

#include "iostream"
using namespace std;
class Person
{
public:
    Person()
    {
        cout<< "Person无参构造函数(默认构造)方法:Person()"<<endl;
    }
    Person(int p)
    {
        cout<< "Person有参构造函数方法:Person(int p)"<<endl;
        m_Age = p;
    }
    Person(const Person &p) //const只读 &p传地址进来 Person &p = Person * const p
    {//函数体里写把传进来的p的值的参数挨个传递
        cout<< "Person拷贝构造函数方法:PersonPerson(const Person &p)"<<endl;
        m_Age = p.m_Age;
    }

    ~Person()
    {
        cout<< "Person析构函数方法:~Person()"<<endl;
    }


public:
    int m_Age;


};


/** 1.使用一个已经构造的对象来初始化另一个对象(用拷贝构造函数初始化)**/
void test01()
{//括号法调用构造函数
    Person p1(20);
    Person p2(p1); //用拷贝构造函数 用已经构造的对象p1来初始化另一个对象p2
    cout << "p2.age的值为:"<<p2.m_Age<<endl;

}

/** 2.以值传递的方式给函数传值 **/
void doWork(Person p)
{

}
void test02()
{
    Person p;
    doWork(p);//值传递向doWork()传递一个p
                //值传递本质上是要赋值一份值给函数，所以调用了拷贝构造函数，可以看到运行了拷贝构造函数
                //值传递不会改变 传入的实参值
}

/** 3.以值方式返回局部对象 **/
Person doWork2()
{
    Person p1;
    //cout << (int *)&p1 <<endl;
    return p1; //函数运行完局部变量就释放了，这个返回的p1是把原来的p1拷贝了一遍再返回的
                             //返回的p1不是原来的p1，所以p1拷贝了一遍用了拷贝构造函数
}                            //但w我的编译器会优化,不会调用拷贝构造函数

Person test03()
{
    Person p = doWork2() ;
    return p;
}



int main(void)
{
    //test01(); //1.拷贝函数初始化对象
    //test02(); //值传递要调用拷贝函数
    test03();//3.以值方式返回局部对象 要调用拷贝函数




    cout<<"\r\n\r\n输入任意字符结束函数\r\n"<<endl;
    cin.get();
    return 0;
}
/**
SUMMERIZE:
拷贝函数在什么时候会用到？
1.用一个对象初始化另一个对象。 要用到拷贝函数初始化
2.值传递对象时,因为值传递要赋值一份所以用到拷贝函数
3.局部变量返回对象时。局部变量在函数执行完就会销毁,因此return值是，会调用拷贝构造函数吧返回的值拷贝一遍然后返回
**/
