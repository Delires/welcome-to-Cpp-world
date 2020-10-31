/**
类对象作为类成员----类嵌套
1. 一个类具体化的对象作为另一个类的成员(属性),叫做"对象成员"
    class A{}
    class B
    {
       A a;
    }
2.那么程序运行 写构造A还是B呢？
  结束后先析构A还是先析构B呢？
  盲猜先构B后A 析构先A后B 栈先进后出(X)
  应该是先构造A再构造B,A是B的一部分,好比人体,把胳膊腿构造了才能构造人!析构满足栈先进后出
**/
#include "iostream"
#include "string"
using namespace std;

///类对象作为类成员脚"对象成员"
class Phone
{
public:
    Phone(string name): p_Name(name) //初始化列表给Phone对象的成员(属性)初始化
    {
        cout<< "A:Phone(string name)有参构造函数调用"<<endl;
    }

    ~Phone()
    {
        cout<< "A:~Phone()析构函数调用"<<endl;
    }
public:
    string p_Name;
};

class Person
{
public:                                      //m_PName(phone) 相当于 Phone m_PName = phone;构造函数隐式法赋值
    Person(string name, string phone):m_Name(name),m_PName(phone)
    {//初始化列表形式给成员属性赋初值
        cout<< "B:Person(string name, string phone) 有参构造函数调用"<<endl;
    }
    ~Person()
    {
        cout<< "B:~Person()析构函数调用"<<endl;
    }
public:
    string m_Name;
    Phone m_PName; //Phone这个类的对象p_Name做Person这个类的成员
} ;

void test01()
{
    Person p1("CPX","XIAOMI");//调用结构函数Person给成员m_Name m_PName赋初值
                             //m_PName(phone) 应该是Phone m_PName = phone;赋值 隐式法赋值

    cout  << p1.m_Name << " 拿着 "<< p1.m_PName.p_Name<<endl;
                                   //对象成员的值提取一定要到最底层, xx.xx.xx
}

int main(void)
{
    test01();


    cout<< "\r\n\r\n输入任意字符结束程序\r\n"<<endl;
    cin.get();
    return 0;
}
/**
SUMMERIZE:
1.A类具体化的对象做B类的成员:叫做"对象成员"  类似类嵌套
2.由于A是B的成员,所以编译器在构造时先构造A后构造B(先有胳膊腿才有人)
                                   析构满足栈先入后出原则
3.对B类的成员A赋值时Person(Pstring phone):Pm_PName(phone) == Phone Pm_PName = phone
                                                          //该赋值方法属于有参构造的隐式赋值方法
**/
