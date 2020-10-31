/**
作用：常量引用主要用来修饰形参，防止形参改变实参
在函数形参列表中，可以加 const修饰形参，防止形参改变实参
类似常量指针 const int *p
**/
#include "iostream"
using namespace std;

//函数中 常量引用修饰形参 防止对原来的数误操作
int printf_yinyong( const int &a)//const int &a 防止对原来数据误操作
{
    //a = 500; //const int &a; 常量引用 值无法修改
    cout<< "a = "<<a<< endl;
}

int main(void)
{
   // int &b = 10; //引用必须有合法的内存块
    const int &ref = 10;//加上const就合法了?为什么？
                //加上const后，编译器就自动把代码修改成了 int temp =10; cosnt int &ref  = temp; 即变量原名编译器自动起好了,我们只需用别名即可
    //ref = 20;//加上const常量引用 只读不可修改

    int a=20;
    printf_yinyong(a); //引用做函数参数,直接传递变量名即可
    cout<< "a = "<<a<< endl;





    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}


/**

**/
