/**
指针作为输入参数，重载多个程序太麻烦，我们可以泛型程序设计
template <typename xxx> 然后重载函数变量的定义就用 xxx name
这样可以用一个程序来代表所有的因输入参数类型不用，个数不同 而实现相同目的程序
**/
#include "iostream"
using namespace std;
#define SIZE 5

template <typename compatible> //泛型程序设计马甲 定义变量compatible
int ShowArray( compatible *pBegin, compatible *pEnd) //用定义的变量compatible 去定义形参 表明形参匹配所有变量格式
{
    while( *pBegin != *pEnd)
    {
        cout << *pBegin << "  ";
        pBegin++;
    }
}

int main(void)
{
    int in_arry[ SIZE] = {0, 1, 2, 3, 4};
    char ch_arry[ SIZE] = {'A', 'B', 'C', 'D', 'E'}; //字符串数组  要和字符串 有所区别

    int *inPointer = in_arry;
    char *chPointer = ch_arry;

    ShowArray( inPointer, inPointer+5);
    cout << endl;
    cout << endl;
    ShowArray( chPointer, chPointer+5);

}
