/**
���ã�����������Ҫ���������βΣ���ֹ�βθı�ʵ��
�ں����β��б��У����Լ� const�����βΣ���ֹ�βθı�ʵ��
���Ƴ���ָ�� const int *p
**/
#include "iostream"
using namespace std;

//������ �������������β� ��ֹ��ԭ�����������
int printf_yinyong( const int &a)//const int &a ��ֹ��ԭ�����������
{
    //a = 500; //const int &a; �������� ֵ�޷��޸�
    cout<< "a = "<<a<< endl;
}

int main(void)
{
   // int &b = 10; //���ñ����кϷ����ڴ��
    const int &ref = 10;//����const�ͺϷ���?Ϊʲô��
                //����const�󣬱��������Զ��Ѵ����޸ĳ��� int temp =10; cosnt int &ref  = temp; ������ԭ���������Զ������,����ֻ���ñ�������
    //ref = 20;//����const�������� ֻ�������޸�

    int a=20;
    printf_yinyong(a); //��������������,ֱ�Ӵ��ݱ���������
    cout<< "a = "<<a<< endl;





    cout<< "\r\n\r\n�������ַ���������������\r\n"<< endl;
    cin.get();
    return 0;
}


/**

**/
