/**
在程序编译后，产生的区域----栈区
    由编译器自动分配释放, 存放函数的参数值,局部变量等
    注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
**/
#include "iostream"
using namespace std;


//栈区注意事项:不要返回局部变量地址，局部变量存放在栈,函数结束后会自动释放
//栈区数据由编译器开辟和释放

int* fuction( void)
{
    int a = 10;
    return &a;//不要返回局部变量地址，局部变量存放在栈,函数结束后a会自动释放。所以p指向的东西没了
}            //运行编译器卡死


int main(void)
{

    int *p = fuction();
    cout<< *p <<endl;


    cout<< "\r\n\r\n输入字符程序结束\r\n"<<endl;
    cin.get();
    return 0;
}

/**
结论:
  局部变量不能返回指针
**/
