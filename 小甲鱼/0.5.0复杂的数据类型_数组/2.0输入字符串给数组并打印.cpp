/**
我们在C++中我们也可以用同样的方法实现，但C++提供了更好的std:：string类型，所以我们不必再使用老式的C方法咯。
课堂练习：
一请分别尝试用C和C++实现将用户输入的字符串打印出来~
c语言用scanf()   c++中把变量定义为string类型，不用赋值，cin会自动存进去
**/
#include "iostream"
#include "string" //string的头文件
using namespace std;

int main(void)
{
    string str;
    cout<< "请输入一串字符:";
    //cin >> str; //有空格就结束了，不能识别，可以改为以下
    getline(cin, str);//调用getline()函数，直接把一串数字给str
    cout<< "输入字符为:" <<str <<endl;

    return 0;
}
