/**
const修饰指针有三种情况

1.常量指针 const int * p1 = &a; //指针指向的值不能，指针指向可以改。
                        //一般做函数的形参，不会改变实参值
2.指针常量 int * const p1 = &a; //指针指向的值可以改，指针的指向不能改
                        //在"变量引用(起别名)==指针常量"int &a=b;
3.即修饰指针，又修饰常量 const int * const pi; //指针指向的值 和 指针指向都不能改

口诀:常量指针哪个在前,哪个不能改，语法上先写哪个。

**/
#include "iostream"
using namespace std;

int main() {

	int a = 10;
	int b = 10;

//1.常量指针
    const int *p1 = &a;
    //*p1 = 50;//常量值不能改
    p1 = &b; //指向可以改

//2.指针常量
    int * const p2 =&a;
    *p2 = 50; //常量可改变
     //p2 = &b; //指针指向不能改






	cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
/**
口诀:常量指针哪个在前,哪个不能改，语法上先写哪个。
                 const int *p
                 int * const p;

**/
