/**
cin_ignore() 和 cin.getline() 的用法
切记字符串的输入最后一个字符是\0,即char xx[10]只能输入19个字符，第20个自动补\0
**/
#include "iostream" //iostream包含istream和ostream类，
            //istream包含cin对象  ostream包含cout对象
using namespace std;  //姓名空间 防止相同变量名互相之间出错
//按对象的思想处理
int main(void)
{
    char data[20];
 //cin知道如何从用户终端提取数据，cin称作提取操作符，它一次从 输入流对象cin里 提取一个整数
 //当用户输入数据时，对应的字符就会输入到键盘缓存区。当按下回车，数据就会从键盘缓存区到操作流里 输入流对象cin里

    cin.ignore(7);  //这个对象行为是忽略 输入流对象cin 的前7个   属性是7
    cin.getline(data, 15);//这个对象行为是得到cin数据流的后15个 并且给data
                          //属性是data 和 15

    cout << data <<endl;  //cout对象是输出data endl结束且回车
                          //<< 把data的值流到cout

    return 1;
}
