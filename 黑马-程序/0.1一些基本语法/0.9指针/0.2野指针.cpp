/**
野指针:指向非法内存的指针，乱指。
**/
#include "iostream"
using namespace std;

int main(void)
{
    int *p = NULL; //这是空指针
    int *q = (int *)0x1100; //这是野指针，因为你并不知道0x1100是那块内存
                          //没有提前分配，直接指，这就是非法的。

    int *t;  //这也是野指针，因为没初始化，所以系统会随机分配。也是非法


    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}

/**
总结：空指针和野指针都不是我们申请的空间，因此不要访问。
**/
