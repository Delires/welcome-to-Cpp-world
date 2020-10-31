#include "swap.h"

void exchange(int num1, int num2)
{
    int temp;

    cout<< "交换前的形参值:"<<endl;
    cout<< "num1="<<num1<<endl;
    cout<< "num2="<<num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<< "交换后的形参值:"<<endl;
    cout<< "num1="<<num1<<endl;
    cout<< "num2="<<num2<<endl;



}
