/**
指针和函数
值传递：不能改变实参
指针(地址)传递：可以改变实参
**/
#include "iostream"
using namespace std;

void swapp(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

int main(void)
{
    int a=10, b=20;

    cout<< "地址传递到函数前的实参值"<<endl;
    cout<< "a="<<a<<endl;
    cout<< "b="<<b<<endl;

    swapp(&a, &b);

    cout<< "\r\n"<<endl;
    cout<< "地址传递到函数后的实参值"<<endl;
    cout<< "a="<<a<<endl;
    cout<< "b="<<b<<endl;

    cout<< "\r\n"<<endl;
    cout<< "值传递不会影响变量原来的值，但地址传递会影响到实参的值。\r\n原因看后文注释"<<endl;

    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
/**
1.值传递到函数，形参会另外开辟内存来储存实参，然后函数在对形参处理。所以并不会影响原来的实参
2.地址传递到函数，形参的地址指向的就是实参的地址，函数对地址解引用处理本质上就是对实参进行处理。所以会影响实参的值
总结：如果不想修改实参，就用值传递，如果想修改实参，就用地址传递
**/
