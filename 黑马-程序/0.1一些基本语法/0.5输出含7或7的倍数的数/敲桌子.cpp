/**
题目:输出含7或7的倍数的数
     7的倍数 %7 ==0
     个位提取出来 %10 == 个位
     十位提取出来 /10 == 十位
**/
#include "iostream"
#include "string"
#include "stdlib.h"  //srand()随机数种子函数   rand()产生随机数函数  rand()%number:产生0~number之间的随机数
#include "time.h"   //time();函数头文件
using namespace std;

int main(void)
{
    for(int i=0; i<100; i++)
    {
        if( (i%7 == 0) || (i / 10 == 7) || (i%10 ==7)  )
        {

            cout<<"敲桌子\t";
        }
        else
        {
            cout<<i<<"\t";
        }
    }


    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}

/**
1.判断十有7  i/10 == 7
2.判断个位有7  i%10==7
3.\t使输出整齐

**/
