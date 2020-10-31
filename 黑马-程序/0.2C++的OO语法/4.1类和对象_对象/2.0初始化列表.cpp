/**
初始化列表
之前通过结构函数 或 get/set函数来对private变量初始化
C++提供了一种初始化列表的方法直接对private变量初始化
语法:构造函数():属性1(值1),属性2(值2).....{}
**/
#include "iostream"
using namespace std;

class Car
{
public:
///** 传统的方法初始化 **/
//    Car(int a, int b, int c)//通过有参结构函数来初始化变量
//    {                      //写了有参，编译器会自动写拷贝构造,不写无参构造
//        m_A = a;            //析构会自己写
//        m_B = b;
//        m_C = c;
//    }

/** 初始化列表初始化   语法:构造函数():属性1(值1),属性2(值2).....{}**/
///死板的方法
//Car():m_A(30),m_B(20),m_C(10)
//{
//
//}
//一种更灵活的写法
Car(int a, int b, int c):m_A(a), m_B(b), m_C(c)
{

}

public:
    int m_A;
    int m_B;
    int m_C;
} ;

void test01()
{
    //Car c1(10, 20, 30); //括号法赋值
    Car c1(30, 20, 10);  //初始化列表法赋值
    cout<< c1.m_A<<endl;
    cout<< c1.m_B<<endl;
    cout<< c1.m_C<<endl;
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
初始化列表语法: 构造函数():属性1(值1),属性2(值2),......{}
一般都灵活的写为:构造函数(int a,int b):属性1(a),属性2(a),......{}
优点:再调用构造函数时在{}外就赋值了,{}内可以写其他的省空间
**/
