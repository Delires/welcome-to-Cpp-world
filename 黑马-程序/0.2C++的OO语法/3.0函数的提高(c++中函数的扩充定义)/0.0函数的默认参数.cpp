/**
函数的默认参数: C++再定义函数时，给函数的形参附上默认值
例如:int function(int a, int b, int c=10, int d=20);//dc作为形参就有默认值
     {
                xxxx;
     }
注意:
1.调用函数时，只需传递没有默认值的形参的值即可。
              如果形参默认值那个位置也传递值了，传递了就用传递的值，没传递就用默认值
2.函数定义时，默认值形参只能放在函数最后
3.2.函数的声明有默认形参，函数的定义就不能有默认形参，声明和定义只能有一方有默认形参
**/
#include "iostream"
using namespace std;

int funct(int a, int b, int c=10,int d=20)//dc作为形参就有默认值
{
        int value = a+b+c+d;
        return value;  //局部变量地址和引用不能做返回值 局部变量值可以
}

/**这种定义有错，1.函数默认形参都必须放到函数定义后**/
//int funct2(int a, int b, int c=10,int d)
//{
//        int value = a+b+c+d;
//        return value;
//}

/**这种定义有错，2.函数的声明有默认形参，函数的定义就不能有默认形参**/
/**              声明和定义只能有一方有默认形参 **/
int funct3(int a, int b);
int funct3(int a=10, int b=20)//声明和定义只能有一方有默认形参，否则会产生二义性
{
        return a+b;
}


int main(void)
{
    int a= 10, b= 20, value;
    value = funct(a, b, 30,40);//函数的默认形参位置，传递值了就用传递的值。没传递就用默认值
    cout << value<<endl;

    value = funct(a, b);//函数的默认形参位置没传递，就用默认值
    cout << value<<endl;

    value = funct3();   //声明和定义只能有一方有默认形参，否则会产生二义性
    cout << value<<endl;


    cout<< "\r\n\r\n输入任意字符结束\r\n"<<endl;
    cin.get();
    return 0;
}

/**
SUMMARIZE:
1.调用函数时，只需传递 没有默认值的形参的值 即可。
              如果形参默认值那个位置也传递值了，传递了就用传递的值，没传递就用默认值
2.函数定义时，默认值形参只能放在函数最后
3.函数的声明有默认形参，函数的定义就不能有默认形参，声明和定义只能有一方有默认形参
**/
