/**
题目:系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小
     ，如果猜对恭喜玩家胜利，并且退出游戏。
要点:while循环  rand()生成随机数
**/
#include "iostream"
#include "string"
#include "stdlib.h"  //srand()随机数种子函数   rand()产生随机数函数  rand()%number:产生0~number之间的随机数
#include "time.h"   //time();函数头文件
using namespace std;

int main(void)
{
    time_t b = time(NULL);
    int a, in=101,i=0;

    srand((unsigned int)time(NULL)); //埋下时间种子，利用系统的时间产生随机数
    a =rand()%99+1;  //rand()%number:产生0~number之间的随机数

    cout<< b<<endl;
    cout<< "生成的随机数为:"<<a<<endl;

    while( in != a)
    {   i++;
        cout << "请输入数据,只有5次机会:";
        cin >> in;
        if( cin.fail())
        {
            cout << "输入错误"<<endl;
            break;
        }
        else if( in< a )
        {
            cout << "输入的数小了"<<endl;
        }
        else if( in> a  )
        {
            cout << "输入的数大了"<<endl;
        }
        else if( in<1 && in>100)
        {
            cout << "请输入1~100之间的数"<<endl;
        }
        else if( in== a )
        {
            cout << "你真棒"<<endl;
        }
        if(i == 5)
        {
            cout << "5次机会用完，游戏结束"<<endl;
            break;
        }
    }





    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}

/**
总结:
1.学习了如何产生随机数， 先srand( (unsigned int)time(NLL))埋下种子， 再rand()产生随机数
2.cin.fail()判断输入是否是非法字符
**/
