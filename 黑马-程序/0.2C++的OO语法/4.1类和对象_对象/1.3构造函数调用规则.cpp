/**
默认情况下，c++编译器至少给一个类添加3个函数
   1. 默认构造函数(无参，函数体为空)
   2．默认析构函数(无参，函数体为空)
   3．默认拷贝构造函数，对属性进行值拷贝(非空)
构造函数调用规则如下：
   1. 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
   2. 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
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
    Person(int age)
    {
        cout<< "Person有参构造函数方法:Person(int age)"<<endl;
        m_Age= age;
    }
    Person(const Person &p)
    {
        cout<< "Person拷贝构造函数方法:Person(const Person &p)"<<endl;
        m_Age = p.m_Age;
    }

    ~Person()
    {
        cout<< "Person析构函数方法:~Person()"<<endl;
    }


public:
    int m_Age;


};


/** 1. 如果用户定义有参构造函数，c++不在提供默认无参构造(调用无参构造会出错)，但是会提供默认拷贝构造. **/
void test01()
{
    Person p1(20);
    Person p2(p1); //即便把拷贝函数注释了,还是仍然能拷贝值。所以c++编译器至少给一个类添加3个函数:拷贝构造函数
    cout << "p2.age的值为:"<<p2.m_Age<<endl;
}

/** 2. 如果用户定义拷贝构造函数，c++不会再提供其他普通构造函数 **/
void test02()
{
    Person p(25);
    Person p2(p);
    cout << "p2.age的值为:"<<p2.m_Age<<endl;
}


int main(void)
{
    //test01();
    //test02();




    cout<<"\r\n\r\n输入任意字符结束函数\r\n"<<endl;
    cin.get();
    return 0;
}
/**
SUMMERIZE:
①无参构造函数
②有参构造函数
③拷贝构造函数
④析构函数
自己什么都不添加,编译器默认添加①③④
①②③中自己添加了某项，则上方编译器就不自动添加,下方编译器会自动添加
**/
