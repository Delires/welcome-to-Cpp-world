#include "iostream"
#include "string"
using namespace std;
/**
原因：数组定义与初始化分开时，只能进行单个元素的赋值，而不能进行统一赋值。
      在全局区数组不能分别赋值，局部区可以
      全局区和局部区都可以整体赋值
C语言的规定!!!除了变量和类型定义初始化可以放到外面，其它必须放到函数内如变量赋值。
**/
#include "iostream"
using namespace std;

typedef struct
{
  unsigned int BTCR[8];
} FSMC_Bank1_TypeDef;

#define FSMC_Bank1          ((FSMC_Bank1_TypeDef *)0xA0000000)

FSMC_Bank1_TypeDef ab = {1,2,3,4,5};


FSMC_Bank1_TypeDef *p= &ab;
int main(void)
{
    cout<< &ab <<endl;
    cout<<  &(ab.BTCR) <<endl;
    cout<<  &(ab.BTCR[0]) <<endl;
    cout<<  &(ab.BTCR[1]) <<endl;
    cout<<  &(ab.BTCR[2]) <<endl;
    cout<<  &(ab.BTCR[3]) <<endl;

    cout<<  "\r\n\r\n" <<endl;

    cout<<  &p <<endl; //&p的值是 存储ab地址这个数据地方的地址
    cout<<  p <<endl;  //p的值是ab的地址
    cout<<  &((*p).BTCR) <<endl; //&(p->BTCR) p的第一个成员的地址
    cout<<  &(p->BTCR[0]) <<endl;
    cout<<  &(p->BTCR[1]) <<endl;
    cout<<  &(p->BTCR[2]) <<endl;
    cout<<  &(p->BTCR[3]) <<endl;



    cout<<  "\r\n\r\n" <<endl;

    cout<<  FSMC_Bank1 <<endl;
    cout<<  FSMC_Bank1->BTCR <<endl;
    //cout<<  FSMC_Bank1->BTCR[1] <<endl;
    //cout<<  FSMC_Bank1->BTCR[2] <<endl;
    //cout<< dizhi <<endl;


    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}
