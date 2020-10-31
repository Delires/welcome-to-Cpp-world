/**
const修饰指针有三种情况
1. const修饰指针   --- 常量指针; const int *p:指针的指向可以修改,指针指向的值不可以修改
2. const修饰常量   --- 指针常量  int *const p:指针的指向不可以修改,指针指向的值可以修改
3. const即修饰指针，又修饰常量   const int *const p:指针的指向和指针指向的值均不可以修改
记法: const修饰什么，什么就不可以更改。int *const p const修饰的是指针，所以指针的指向不能修改
      翻译成中文去记，const int *p 常量指针
                       int *const p 指针常量
**/
#include "iostream"
using namespace std;

int main(void)
{

    int a=10, b=20;
    int * const q1= &a; //指针常量必须直接赋值，不能分开赋值
    //p = &b;  //指针常量q1的指向不能修改
    *q1 = 50; //指针常量q1的值可以修改




    const int *q2; //常量指针
    q2 = &a;
    q2 = &b;  //常量指针q2 指向可以更改
    //*q = 20; //常量指针q2 的值不能更改

    const int * const q3 = &a;
//    q3 = &b;  //常量指针常量q3 的指向和值均不能修改
//    *q3 = 20;



    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
