/**
1.函数的重载：一个函数多种用途。重载只是一个解决问题方法，并不是面向对象语言独有
2.函数重载定义：函数名相同，但输入参数不同，来达到用途不同的目的。
3.可以通过形参不同来重载，但不同通过返回值不同来重载。
        int caucl();
        double caucl();
  上面通过返回值重载，调用的时候都是caucl()，编译器无法分辨到底是哪个。
4.重载能不用就不用，用的话一定要注释清楚。
**/
/**
利用重载函教的方法设计一个程序，激程序通过函数"calc（）“进行计算并返回显示结果。
  当传入一个参数时，计算该参数的平方值；
  当传入两个参数时，计算两个参数的积；
  当传入三个参数时，计算三个参数的和。
**/

#include "iostream"  //这个类包含了cout和cin这两个输出流对象
using namespace std; //C＋＋标准程序库中的所有标识符都被定义于一个名为std的namespace中。
                 //这样命名空间std内定义的所有标识符都有效（曝光）。就好像它们被声明为全局变量一样。
                 //那么以上语句可以直接调用cout cin
#define JIAYU 1
#if  JIAYU
int caucl( int x);
int caucl( int x, int y);
int caucl( int x, int y, int z);

int main(void)
{
    int val;
    int a,b,c;

//小甲鱼这里的参数值，是用输入得到的。我是直接得到的
    cin>>a>>b>>c;  //输入记得空格隔开

    cout << "caucl根据输入的形参个数不同，结果不同"<< endl;
    cout << "重载函数的值为:"<<caucl(a) << endl;
    cout << "重载函数的值为:"<<caucl(a,b) << endl;
    cout << "重载函数的值为:"<<caucl(a,b,c) << endl;

    return 0;
}


int caucl( int x)
{
    int value;
    value = x *x;

    return value;
}

int caucl( int x, int y)
{
    int value;
    value = x *y;

    return value;
}

int caucl( int x, int y, int z)
{
    int value;
    value = x + y + z;

    return value;
}


#else
//对函数进行重载，函数名返回值类型一致，形参个数和类型不同
int caucl( int x);
int caucl( int x, int y);
int caucl( int x, int y, int z);

int main(void)
{
    int val;
    int a = 1, b=2, c=3;
    val = caucl(a, b,c);
    cout << "caucl根据输入的形参个数不同，结果不同"<< endl;
    cout << "重载函数的值为:"<<val << endl;

    return 0;
}


int caucl( int x)
{
    int value;
    value = x *x;

    return value;
}

int caucl( int x, int y)
{
    int value;
    value = x *y;

    return value;
}

int caucl( int x, int y, int z)
{
    int value;
    value = x + y + z;

    return value;
}
#endif // JIAYU
