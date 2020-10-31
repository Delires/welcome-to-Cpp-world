/**
引用做函数返回值
写法: int& xxx(int a, int b)   //函数返回值类型定义处有&
      {
            return a;
      }
注意:1.不能返回局部变量引用
     2.引用做函数返回值的 函数调用可以作为左值
**/
#include "iostream"
using namespace std;

////1.不能返回局部变量引用
//int& tes01(void)
//{
//    int a = 10;//局部变量存在四区的栈
//    return a;
//
//}


//2.函数调用可以作为左值
int& tes02(void)
{
    static int a = 10;//静态变量放在全局区，全局区在程序运行结束后才释放
    return a;

}

int main(void)
{
//必须在声明引用变量时进行初始化，之后不能改变
    int &ref = tes02();
    cout<< "ref="<<ref<< endl;
    cout<< "ref="<<ref<< endl;
    cout<< "ref="<<ref<< endl;

    tes02() = 100; //tes02()返回的是a，对 tes02()赋值则就是对原来a赋值。所以a变化了
              //如果函数返回值是引用。函数可以在等号左边，作为左值，来给返回值赋值
    cout<< "ref="<<ref<< endl; //ref是a的别名,用别名调取的内存还是a的内存,所以值仍是1000
    cout<< "ref="<<ref<< endl;
    cout<< "ref="<<ref<< endl;





    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}


/**
引用定义函数:  int& xxx(int a, int b)  //返回值类型加上&表明是引用做返回值
                {
                      a=xxx;
                      b=xxx;
                }
               接收函数的返回值必须用引用接收int &b = 引用做函数返回值 的函数
1.不能返回局部变量的引用
2.如果函数返回值是引用。函数可以在等号左边，作为左值，来给函数的返回值赋值。
  接收函数的返回值必须用引用接收int &b, 返回值变化引用的值也变化
**/
