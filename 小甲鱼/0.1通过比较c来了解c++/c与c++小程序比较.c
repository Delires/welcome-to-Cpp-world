/**
同样的用c与c++分别编写程序求和------C篇
问题：对一个整型数组(10个)求和。
要求：定义一个存储着n个元素的数组，要求用C语言完成这个任务。
**/
#include "stdio.h"

void average( int *array, int size);

int main(void)
{
    int ShuZ[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int lon = sizeof(ShuZ)/sizeof(int);

    printf("数组大小：%d \r\n", sizeof(ShuZ) );
    average(ShuZ, lon);
    return 0;

}

void average( int *array, int size)
{
    int i,sum=0; //值记得要初始化！！ sum要初始化
    int  valu=0;

    printf("数组传到函数大小：%d \r\n", sizeof(array) );

    for(i=0; i<10; i++)
    {
        sum += *(array++);
    }

    valu = (float) (sum / size);
    printf("数组和值为：%d \r\n", sum);
    printf("平均值为：%d \r\n", valu);
}
