/**
函数的占位参数:C++中函数的形参列表里可以有占位参数，用来做占位，“调用函数时必须填补该位置”
语法:返回值类型 函数名 (数据类型){int a, int}  //只放个变量类型来占位
注意:1.占位参数也可以有默认参数
**/
#include "iostream"
using namespace std;

void funct(int a, int ) //只放个变量int类型来占位
{
        cout<< "这是一个占位参数,“调用函数时必须填补该位置”"<<endl;
}

void funct1(int a, int =10) //含默认形参的占位参数
{
        cout<< "这是一个含默认形参的占位参数,“调用函数时可以不用补齐”"<<endl;
}

int main(void)
{
    //funct(10); //调用函数时必须填补占位参数位置
    funct(10, 10);
    funct1(10); //含默认形参的占位参数，可以不用补齐该位置

    cout<< "\r\n\r\n输入任意字符结束\r\n"<<endl;
    cin.get();
    return 0;
}

/**
SUMMARIZE:
1.函数定义时，只放个变量类型来占位,int fuction(int a, int). 调用时必须要补上该位置
2.占位参数要是个默认参数，如int fuction(int a, int = 10).调用时可以不用补上该位置
**/
