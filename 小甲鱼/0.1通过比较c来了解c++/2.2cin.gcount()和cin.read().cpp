#include "iostream" //iostream头文件包含了 istream和ostream这两个类
                    //istream类包含了cin对象 ostream包含了cout对象
using namespace std; //姓名空间 防止 多个定义变量重名
#define SIZE 50
int main(void)
{
    char buf[SIZE];
    cout << "输入一段文本\n" ; //输出流 把"输入一段文本\n"输出给cout
    cin.read(buf, 20); //输入流对象cin的read行为：读取buf的前20个数
                       //属性为buf 和 20个数
    cout<<"字符收集的数据个数为："
                 <<cin.gcount()<<endl; //输入流对象cin的gcount行为:读取输入数据的个数
                                       //endl 结束+换行 符
    cout << "输入的文本信息为：";
    cout.write(buf, 40) ; // 设置cout的输出样式 输出流对象cout的write行为:把输buf的20个数据打印出来
    cout<<endl;

}
