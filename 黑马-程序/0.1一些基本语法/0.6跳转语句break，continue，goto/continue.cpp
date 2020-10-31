/**
continue语句
作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
       break是直接跳出循环，不执行循环。注意区别
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
        if( i % 2==0)
        {
            continue;  //可以筛选数据，当是偶数时不执行后面的打印语句了，直接下一次循环
                       //筛选条件，到此就停止了，进行下次循环
        }

        cout << i <<endl;
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
