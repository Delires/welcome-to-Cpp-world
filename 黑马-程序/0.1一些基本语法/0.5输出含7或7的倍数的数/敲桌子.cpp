/**
��Ŀ:�����7��7�ı�������
     7�ı��� %7 ==0
     ��λ��ȡ���� %10 == ��λ
     ʮλ��ȡ���� /10 == ʮλ
**/
#include "iostream"
#include "string"
#include "stdlib.h"  //srand()��������Ӻ���   rand()�������������  rand()%number:����0~number֮��������
#include "time.h"   //time();����ͷ�ļ�
using namespace std;

int main(void)
{
    for(int i=0; i<100; i++)
    {
        if( (i%7 == 0) || (i / 10 == 7) || (i%10 ==7)  )
        {

            cout<<"������\t";
        }
        else
        {
            cout<<i<<"\t";
        }
    }


    cout << "\r\n\r\n\r\n�����������ַ���������"<< "\n\n"<<endl;
    cin.get();
    return 0;
}

/**
1.�ж�ʮ��7  i/10 == 7
2.�жϸ�λ��7  i%10==7
3.\tʹ�������

**/
