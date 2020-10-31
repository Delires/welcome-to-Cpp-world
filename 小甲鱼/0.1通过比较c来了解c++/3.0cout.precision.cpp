/**
cout对象的 precision行为的操作
cout.precision()输出固定的小数点位数
**/
#include "iostream" //包含istream ostream的类
                //istream的类包含cin对象    ostream的类包含cout对象
#include "math.h"

using namespace std;  //姓名空间 防止多个变量定义出粗

int main(void)
{
    double result;
    result = sqrt(3.0);

    cout << "对3.0的开方数据 结果保留0~9位小数点，结果如下：\r\n";

    for(int i=1; i<=9; i++)
    {
        cout.precision(i);     //设置cout对象的.precision行为：输出的有效位数
        cout << result <<endl; //把result流向cout输出流对象输出
    }

    cout << "当前输出精度为" << cout.precision() << endl;  //输出当前的输出精度
}

