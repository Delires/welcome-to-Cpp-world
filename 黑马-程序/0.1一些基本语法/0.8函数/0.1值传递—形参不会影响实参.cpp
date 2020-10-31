/**
值传递发生时—形参不会影响实参，即传入函数的实参，不会被函数而影响实参的值。函数只会改造它自己的形参
为什么? 看最后
**/
**/
#include "iostream"
using namespace std;

void exchange(int num1, int num2)
{
    int temp;

    cout<< "交换前的形参值:"<<endl;
    cout<< "num1="<<num1<<endl;
    cout<< "num2="<<num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<< "交换后的形参值:"<<endl;
    cout<< "num1="<<num1<<endl;
    cout<< "num2="<<num2<<endl;



}


int main(void)
{
    int a = 10;
    int b = 20;

    cout<< "传递到函数前的实参值"<<endl;
    cout<< "a="<<a<<endl;
    cout<< "b="<<b<<endl;

    cout<< "\r\n\r\n"<<endl;
    exchange(a, b);
    cout<< "\r\n\r\n"<<endl;

    cout<< "传递到函数后的实参值"<<endl;
    cout<< "a="<<a<<endl;
    cout<< "b="<<b<<endl;

    cout<< "传递到函数前后的实参值均为发生改变"<<endl;
    cout<< "值传递发生时—形参不会影响实参。传入函数的实参，不会被函数而影响实参的值。函数只会改造它自己的形参"<<endl;

    return 0;
}
/**
为什么?
①int a, b;建立时，内存会开辟两个空间存储这两个值。
②调用函数exchange(int num1, int num2)后，又会给num1,num2开辟两个空间传递a,b值。
 然后函数就会对num1,num2进行操作。而并未对a,b的存储空间操作。
③因此，值传递形参无法影响到实参的值
**/
