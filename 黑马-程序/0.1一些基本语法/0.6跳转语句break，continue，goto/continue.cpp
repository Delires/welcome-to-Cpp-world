/**
continue���
���ã���ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
       break��ֱ������ѭ������ִ��ѭ����ע������
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
        if( i % 2==0)
        {
            continue;  //����ɸѡ���ݣ�����ż��ʱ��ִ�к���Ĵ�ӡ����ˣ�ֱ����һ��ѭ��
                       //ɸѡ���������˾�ֹͣ�ˣ������´�ѭ��
        }

        cout << i <<endl;
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
