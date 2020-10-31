/**
可以建立一个指针数组！！ 此数组专门存放地址
指针数组与数组指针的区别
  数组指针int (*p)[n]; ()优先级高，首先说明p是一个指针，指向一个整型的一维数组，
               这个一维数组的长度是n，也可以说是p的步长。也就是说执行p+1时，
               p要跨过n个整型数据的长度。
 指针数组 定义 int *p[n];[]优先级高，先与p结合成为一个数组，再由int*说明这是一个
              整型指针数组，它有n个指针类型的数组元素。这里执行p+1时，则p指向下一个数组元素，
             这样赋值是错误的：p=a；因为p是个不可知的表示，只存在p[0]、p[1]、p[2]...p[n-1],
             而且它们分别是指针变量可以用来存放变量地址。但可以这样 *p=a; 这里*p表示指针数
             组第一个元素的值，a的首地址的值。

**/
#include "iostream"
using namespace std;
#define SIZE 5

int main(void)
{
    int a = 0, b=7, c=9, d=11 , e=18;
    int *p;
    char ch_arry[ SIZE] = {'A', 'B', 'C', 'D', 'E'}; //字符串数组  要和字符串 有所区别
                                        //这个数组ch_arry 专门存放指针

    int *p_IntArr[SIZE]={ &a, &b, &c, &d,&e};

//打印数组存储的地址值
    for(int i=0; i<SIZE; i++)
    {
        cout<< p_IntArr[i]<< "  ";

    }

    cout<<"\n\n"<<endl;
//提取数组存储地址 指向的元素
    for(int i=0; i<SIZE; i++)
    {
        cout<< *(p_IntArr[i])<< "  ";
    }
    //char *p_IntArr[ SIZE]



}
