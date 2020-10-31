/**
空指针;指向的NULL的地方，指向内存最开始的地方
空指针的意义:给指针初始化用的。
             一个指针最开始，没想好要指到哪，就先弄成空指针。因为指针必须要指向，别让成为野指针。
用法: int *p = NULL;
注意:空指针指向的地址是不能访问的，不能解引用。0~255的内存是系统用的，访问了就会卡死
**/
#include "iostream"
using namespace std;

int main(void)
{
    int *p = NULL;
    *p = 200; //这是错误的用法，0~255的内存是系统用的不能解引用。
              //野指针乱指也会抱死

    cout<<"p空指针的值为:"<< p <<endl;


    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
