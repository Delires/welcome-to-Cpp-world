/**
在程序编译后，生成了exe可执行程序。未执行该程序前，分为两个区域
2.全局区:全局变量和静态变量存放在此,全局区还包含了 全局变量   静态static变量  字符串""常量  const修饰的全局
        该区域的数据在程序结束后由操作系统释放

**/
#include "iostream"
using namespace std;
#define XX 100

int q_a = 10;
int q_b = 10;
const int q_d = 10;
const int q_c = 10;

int main(void)
{
    int a = 10;
    int b = 10;
    cout << "局部变量a的地址为:"<< &a<< endl; //存在栈区,栈区的地址是递减的
    cout << "局部变量b的地址为:"<< &b<< endl;


    cout << "全局变量q_a的地址为:"<< &q_a<< endl;
    cout << "全局变量q_b的地址为:"<< &q_b<< endl;

    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为:"<< &s_a<< endl;
    cout << "静态变量s_b的地址为:"<< &s_b<< endl;

//常量分为:字符串常量""引起来的 和 const修饰的常量
   //字符串常量""的地址
    cout << "字符串常量的地址为:"<< &"hello world" << endl;
   //const修饰的常量的地址  又分为const修饰的全局和局部变量
    cout << "const修饰的全局q_d的地址为:"<< &q_d<< endl;
    cout << "const修饰的全局q_c的地址为:"<< &q_c<< endl;

    const int c_a = 10;
    const int c_b = 10;
    cout << "const修饰的局部变量c_a的地址为:"<< &c_a<< endl;
    cout << "const修饰的局部变量c_b的地址为:"<< &c_b<< endl;



//得出结论:
   cout << "\r\n\r\n得出结论:"<<  endl;
   cout << "在全局区存放的数据有:"<<  endl;
   cout << "全局变量   静态static变量  字符串""常量  const修饰的全局"<<  endl;
   cout << "不在全局区的数据有:"<<  endl;
   cout << "局部变量  const修饰的局部变量"<< endl;



   cout<< "\r\n\r\n输入字符程序结束\r\n"<<endl;
    cin.get();
    return 0;

}

/**
结论:
* C++中在程序运行前分为全局区和代码区
* 代码区特点是共享和只读
* 全局区中存放全局变量、静态变量、常量
* 常量区中包括 const修饰的全局常量  和 字符串常量     不包括const修饰的局部常量

**/
