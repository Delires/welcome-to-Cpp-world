/**
把屏幕上键盘输入的值给变量a： cin>>a;
注意:定义的变量a 和输入的值类型要一致  这样才能把输入的值赋给变量
核心:cin>>a;
**/
#include "iostream"
using namespace std;

int main(void)
{

    bool flag = true; //定义变量一定要赋初值，否则出错
    cout<< "请输入bool类型变量"<<endl;
    cin>>flag;  //输入的值类型要和定义的变量一致
    cout<< "输入的bool变量值为："<<flag<<endl; //布尔输入的值只要是非0，那么都是1
    cout<< "布尔输入的值只要是非0，那么都是1"<<endl;

    cout<< "输入的值类型要和定义的变量一致"<<endl;



    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
