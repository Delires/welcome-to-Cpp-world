#include "iostream"
#include "string"
using namespace std;
/**
ԭ�����鶨�����ʼ���ֿ�ʱ��ֻ�ܽ��е���Ԫ�صĸ�ֵ�������ܽ���ͳһ��ֵ��
      ��ȫ�������鲻�ֱܷ�ֵ���ֲ�������
      ȫ�����;ֲ������������帳ֵ
C���ԵĹ涨!!!���˱��������Ͷ����ʼ�����Էŵ����棬��������ŵ��������������ֵ��
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

    cout<<  &p <<endl; //&p��ֵ�� �洢ab��ַ������ݵط��ĵ�ַ
    cout<<  p <<endl;  //p��ֵ��ab�ĵ�ַ
    cout<<  &((*p).BTCR) <<endl; //&(p->BTCR) p�ĵ�һ����Ա�ĵ�ַ
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


    cout<< "\r\n\r\n�������ַ���������������\r\n"<< endl;
    cin.get();
    return 0;
}
