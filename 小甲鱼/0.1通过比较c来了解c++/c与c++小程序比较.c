/**
ͬ������c��c++�ֱ��д�������------Cƪ
���⣺��һ����������(10��)��͡�
Ҫ�󣺶���һ���洢��n��Ԫ�ص����飬Ҫ����C��������������
**/
#include "stdio.h"

void average( int *array, int size);

int main(void)
{
    int ShuZ[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int lon = sizeof(ShuZ)/sizeof(int);

    printf("�����С��%d \r\n", sizeof(ShuZ) );
    average(ShuZ, lon);
    return 0;

}

void average( int *array, int size)
{
    int i,sum=0; //ֵ�ǵ�Ҫ��ʼ������ sumҪ��ʼ��
    int  valu=0;

    printf("���鴫��������С��%d \r\n", sizeof(array) );

    for(i=0; i<10; i++)
    {
        sum += *(array++);
    }

    valu = (float) (sum / size);
    printf("�����ֵΪ��%d \r\n", sum);
    printf("ƽ��ֵΪ��%d \r\n", valu);
}
