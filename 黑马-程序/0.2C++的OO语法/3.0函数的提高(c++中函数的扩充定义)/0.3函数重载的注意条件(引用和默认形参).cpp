/**
函数重载的注意条件(引用和默认形参)
1.引用作为函数重载的条件
2.默认形参作为函数重载的条件:当函数重载 碰到 函数形参默认参数 就会出现二义性。尽量避免，函数重载和默认参数不要同时出现。
**/
#include "iostream"
using namespace std;

/**1.引用作为函数重载的条件**/
//下面两个函数引用参数类型不同
void funct(int &a) //引用作为函数参数传递
{

        cout<< "funct(int &a)"<<endl;
}

void funct(const int &a) //常量引用作为函数参数传递
{

        cout<< "funct(const int &a)"<<endl;
}


/**2.默认形参作为函数重载的条件**/
void funct1(int a)
{

        cout<< "funct1(int a)"<<endl;
}

void funct1(int a, int b =10) //默认形参做函数的重载
{

        cout<< "funct1(int a, int b =10)"<<endl;
}



int main(void)
{
    int a = 10;
    funct(a);
    funct(10);//10传递到函数里，函数1是int &a =10; 这种表达不合法
              //                函数2是const int &a =10; 这种表达合法，编译器会自助优化int temp=10; const int &a = temp;
              //                所以10会自动传向合法表达的那个函数，所以传向函数2

    cout<< "\r\n\r\n\r\n"<<endl;

    funct1(10,10);
    //funct1(10);//error: call of overloaded 'funct1(int)' is ambiguous|
               //当函数重载 碰到 函数形参默认参数 就会出现二义性。 尽量避免，函数重载和默认参数不要同时出现。




    cout<< "\r\n\r\n输入任意字符结束\r\n"<<endl;
    cin.get();
    return 0;
}

/**
SUMMARIZE:
函数重载条件:
1.函数重载中出现引用，函数输入数字重载到const int &b的形参上
                      函数输入变量名重载到int &b的形参上
2.函数的重载 和 函数默认形参最好不要出现。会出现二义性。
**/
