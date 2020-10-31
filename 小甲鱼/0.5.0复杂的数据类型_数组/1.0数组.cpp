/**
用C++实现一个使用数组的任务，并谈谈在使用中有哪些地方需要注意的。
编程任务：定义一个数组容纳10个整数，这些整数来自用户输入。
        我们将计算这些值的累加和、平均值并输出。
**/
#include "iostream"

#define JIAYU 0
using namespace std;

#if  JIAYU
int main(void)
{
    int array[10];
    int val=0, i;

    for(i=0; i<10; i++)
    {
        cout<<"请输入第"<<i+1<<"个数据  ";
        cin >> array[i];
    }

    for(i=0; i<10; i++)
    {
        val += i;
    }

    cout<<"数组的和为："<<val<<endl;
    cout<<"数组的平均值为："<<(float)val/10<<endl;


}

#else //接下来我们对程序进行扩展，让他更完善，更不容易出错
//1. 用宏定义改变数组长度，让函数可以计算任意长度的数组
//2. 判断cin输入是否正常？输入流正常返回1，输入流错误返回0
#define ITEM 5
int main(void)
{
    int array[ITEM];
    int val=0, i;

    cout<<"请输入"<<ITEM<<"个数据"<<endl;
    for(i=0; i<ITEM; i++)
    {
        cout<<"请输入第"<<i+1<<"个数据  ";
        while( ! (cin >> array[i]) ) //输入流出现问题就停止输入，返回0
        {
            cin.clear(); //cin流对象的一个动作,清除输入,让你重新输入
            cin.ignore(100, '\n');  //清除键盘的缓存
            cout<<"输入时int型，请输入合法值";  //或输入ctrl+b进入判断
        }
    }

    for(i=0; i<ITEM; i++)
    {
        val += array[i];
    }

    cout<<"数组的和为："<<val<<endl;
    cout<<"数组的平均值为："<<(float)val/ITEM<<endl;


}
#endif
