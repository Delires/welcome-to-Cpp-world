/**
��Ŀ:ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С
     ������¶Թ�ϲ���ʤ���������˳���Ϸ��
Ҫ��:whileѭ��  rand()���������
**/
#include "iostream"
#include "string"
#include "stdlib.h"  //srand()��������Ӻ���   rand()�������������  rand()%number:����0~number֮��������
#include "time.h"   //time();����ͷ�ļ�
using namespace std;

int main(void)
{
    time_t b = time(NULL);
    int a, in=101,i=0;

    srand((unsigned int)time(NULL)); //����ʱ�����ӣ�����ϵͳ��ʱ����������
    a =rand()%99+1;  //rand()%number:����0~number֮��������

    cout<< b<<endl;
    cout<< "���ɵ������Ϊ:"<<a<<endl;

    while( in != a)
    {   i++;
        cout << "����������,ֻ��5�λ���:";
        cin >> in;
        if( cin.fail())
        {
            cout << "�������"<<endl;
            break;
        }
        else if( in< a )
        {
            cout << "�������С��"<<endl;
        }
        else if( in> a  )
        {
            cout << "�����������"<<endl;
        }
        else if( in<1 && in>100)
        {
            cout << "������1~100֮�����"<<endl;
        }
        else if( in== a )
        {
            cout << "�����"<<endl;
        }
        if(i == 5)
        {
            cout << "5�λ������꣬��Ϸ����"<<endl;
            break;
        }
    }





    cout << "\r\n\r\n\r\n�����������ַ���������"<< "\n\n"<<endl;
    cin.get();
    return 0;
}

/**
�ܽ�:
1.ѧϰ����β���������� ��srand( (unsigned int)time(NLL))�������ӣ� ��rand()���������
2.cin.fail()�ж������Ƿ��ǷǷ��ַ�
**/
