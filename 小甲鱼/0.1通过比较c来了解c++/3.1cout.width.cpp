/**
使用了 cin.width(x)  cin输入流对象的width行为  设置输入流的域宽，宽度为(x-1) 因为\0占1位
       cout.width(x) cout输出流对象的width行为 设置输出流的域宽，宽度为 x
**/

#include "iostream" //头文件 c++语法不写.h
             //包含istream类 istream类包含cin对象
             //包含ostream类 ostream类包含cout对象
using namespace std; //姓名空间 反正变量定义重名互相干扰
             //属于c++语法 必须加上
#define JIAYU 1
#if(JIAYU)
int main(void)
{
    int width = 4;
    char str[20];

    cout<< "请输入一段文本\n";  //把这行字 给cout输出流对象

    cin.width(5); //输入流设置阈宽,每次只接受4个字符，剩下的再下一次等待。因为字符串最后一位是\0
             //如果所需的宽度比设置的域宽小，空位用填充字符填充。
             //如果显示数据所需的宽度比设置的域宽大，系统输出所有位。
             //域宽设置仅对下一行流读入或流插入抄做有效，在一次操作完后被置0。

    while( cin >> str) //输入的值流入str，一直到输入流流完，结束循环
    {              //输入流设置的域宽是4，所以输入的字符是10个则循环3次  17个循环5次
                   //当流入的数据不是整数，则循环结束
        cout.width(width++); //设置输出的域宽逐渐增加，输出4个。
                    //输出5时，但输入流只接收4个，则前面一个个则前面被空格补齐，所以看起来像向后移位1格

        cout << str << endl; //输出字符

        cin.width(5); //设置输入流每次只接受4个字符

    }
    return 0;
}

#else
int main(void)
{
    int width = 4;
    char str[20]; //存放输入流数据

    cout << "请输入一串字符串:";
    cin.width(2); //设置输入流阈值为4

    while(cin >> str) //输入流数据每次向str流入4个, 输入的数据/4=循环次数
    {          //当流入的数据不是整数，则循环结束

        cout.width(width++); //设置输出流阈值 ,再输出前设置生效，输出的数据不够则在前提补0

        cout << str << endl; //把每次流入str的数据打印出来
        cin.width(2); //每次设置输入流阈值为4
    }

    return 0;

}


#endif
