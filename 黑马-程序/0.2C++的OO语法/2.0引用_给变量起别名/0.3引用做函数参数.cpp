/**
引用做函数参数
引用做函数参数定义  int xxx(int &a, int &b)  //对形参定义一定要加上&证明是引用做函数
                    {
                        a =xx;
                        b =xx;
                    }
作用：函数传参时，可以利用引用的技术让形参修饰实参(修饰==改变)
优点：可以简化指针修改实参
个人理解:引用作为函数参数，和指针做参数一样，形参都会修改实参。给不熟悉指针的人的一种用法

**/
#include "iostream"
using namespace std;
//1.值传递
//2.地址传递
//3.引用传递

//1.值传递
void myswap01(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<< "myswap01 a="<<a<< endl;
    cout<< "myswap01 b="<<b<< endl;

}

//2.地址传递
void myswap02(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//3.引用传递
void myswap03(int &c, int &d)//对形参定义一定要加上&证明是引用做函数
{                       //这个cd就是 mian里面ab的别名。所以会修饰实参。
                        //值传递会另外开辟空间
    int temp;
    temp = c;
    c = d;
    d = temp;
}


int main(void)
{
//必须在声明引用变量时进行初始化，之后不能改变
    int a =10;
    int b =20;

    int &a1 =a;
    int &b1 =b;

    //myswap01(a, b); //形参不会修饰实参  修饰==改变
    //myswap02(&a, &b);//形参会修饰实参  修饰==改变
    myswap03(a, b); //引用做函数形参,直接传递变量名即可。传递&变量名也行
               //myswap03(a1, b1);//此类值传递也行

    cout<< "a="<<a<< endl;
    cout<< "b="<<b<< endl;







    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}


/**
总结：通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单
引用定义函数:  int xxx(int &a, int &b)  //加上&表明是引用做形参
                {
                      a=xxx;
                      b=xxx;
                }

**/
