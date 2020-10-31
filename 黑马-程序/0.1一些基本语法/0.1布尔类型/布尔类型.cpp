/**
作用：布尔数据类型代表真或假的值
       bool类型只有两个值：
          true --- 真（本质是1 或任意非0的值都算是真 ）
          false --- 假（本质是0）
bool类型占==1个字节==大小
**/
#include "iostream"
using namespace std;

int main(void)
{
    cout<<"bool类型只有两个变量true和false，作为函数返回值。占1个字节大小"<<endl;

    bool flag = false;
    cout<<"bool类型的false="<<flag<<endl;
    flag = true;
    cout<<"bool类型的true="<<flag<<endl;

    cout<<"bool类型的大小="<<sizeof(bool)<<"byte"<<endl;



    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
