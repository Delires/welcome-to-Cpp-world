/**
C++特有"引用"
作用:给变量起别名
用法:数据类型 &别名 = 原名  //&不是取址,而是标识作用。 必须在声明引用变量时进行初始化
个人理解:感觉像原名的地址给了别名,对别名的操作也影响程序原来的值。在C中只能用指针代替
官方:c++增加了另外一种给函数传递地址的途径，这就是按引用传递(pass-by-reference)，
     它也存在于其他一些编程语言中，并不是c++的发明。注意起别名只能在开头初始化一次。后名不能初始化
**/
#include "iostream"
using namespace std;
int main(void)
{
    int a =10;
    int &b = a; //起别名操作 数据类型 &别名 = 原名;
             //必须在声明引用变量时进行初始化，之后不能改变
    cout<< "a="<<a<< endl;
    cout<< "b="<<b<< endl;

    b = 100;//通过别名改变值
    cout<< "a="<<a<< endl;
    cout<< "b="<<b<< endl;





    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}
