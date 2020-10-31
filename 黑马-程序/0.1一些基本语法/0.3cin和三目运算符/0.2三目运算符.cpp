/**
1.三目运算符: 表达式1?表达式2:表达式3
  这是由表达式构成,因此不仅仅是简单的写比大小，而是写表达式
2.c++的三目运算时可以继续赋值的
**/
#include "iostream"
#include "string"
using namespace std;

int main(void)
{
    string name;
    cout << "输入她的名字:";
    cin >> name;

    name == "mengdi" ? cout<<"好男人" : cout<<"渣男";
//        表达式1    ?       表达式2  :   表达式3；
//由表达式构成,因此不仅仅是简单的写比大小，而是写表达式


    int a=3,b=6;
    a>b ? a : b =100; //c++的三目运算时可以继续赋值的
                 //把比较胜出的变量继续赋值
    cout << a<<"\r\n"<<b<<endl;


    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
