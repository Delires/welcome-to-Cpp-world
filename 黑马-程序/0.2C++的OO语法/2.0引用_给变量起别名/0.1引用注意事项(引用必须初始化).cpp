/**
语法:起别名操作 数据类型 &别名 = 原名;
引用注意事项:必须在声明引用变量时进行初始化，引用初始化之后不能改变
             int &b; &b=a; //错误,这成了b的地址为a的值了
             int &b=a; &b=c; //错误
**/
#include "iostream"
using namespace std;
int main(void)
{
//必须在声明引用变量时进行初始化，之后不能改变
    int a =10;
    int c =20;
    //int &b ;//error: 'b' declared as reference but not initialized|
    int &b =a;
    b =c; //这是把c的值复制给b和a，而不是引用改名   引用初始化之后不能改变


    cout<< "a="<<a<< endl;
    cout<< "b="<<b<< endl;
    cout<< "c="<<c<< endl;






    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}
