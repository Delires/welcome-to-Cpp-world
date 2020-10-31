/**
函数的重载(很重要!):一个函数名可以多种功能的作用。根据输入参数的个数和类型不同对应到相同名字的不同函数。提高复用性
条件:1.同一作用域下
     2.函数名相同
     3.函数形参的个数，顺序，类型不同
注意:函数的返回值是不可以作为重载条件?为什么？
     函数调用时，不写函数返回值类型。因此返回值做重载条件有歧义性
**/
#include "iostream"
using namespace std;

/**
1.同一作用域下：两个fuct都在全局作用域下
2.函数名相同: 两个函数都叫fuct
3.函数形参的个数，顺序，类型不同: funct()  funct(int a)
**/
void funct()
{

        cout<< "funct()的调用"<<endl;
}

//参数个数不同
void funct(int a) //含默认形参的占位参数
{
        cout<< "funct(int a)的调用"<<endl;
}

//参数类型不同
void funct(double a) //含默认形参的占位参数
{
        cout<< "funct(double a)的调用"<<endl;
}


//参数顺序不同
void funct(int a, double b) //含默认形参的占位参数
{
        cout<< "funct(int a, double b)的调用"<<endl;
}

void funct(double b, int a) //含默认形参的占位参数
{
        cout<< "funct(double b, int a)的调用"<<endl;
}


int main(void)
{
    funct();
    funct(10);//输入参数个数不同，因此调用funct(int a)
    funct(3.14);//参数类型不同，因此调用funct(double a)

    funct(3.14, 10);//参数顺序不同,因此调用funct(int a, double b)
    funct(10, 3.14);//参数顺序不同,因此调用funct(double b, int a)


    cout<< "\r\n\r\n输入任意字符结束\r\n"<<endl;
    cin.get();
    return 0;
}

/**
SUMMARIZE:
函数重载条件:
1.同一作用域下
2.函数名相同
3.函数形参的个数，顺序，类型不同
4.函数的返回值是不可以作为重载条件
**/
