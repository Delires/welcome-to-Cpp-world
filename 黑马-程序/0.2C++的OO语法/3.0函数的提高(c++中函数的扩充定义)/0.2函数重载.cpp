/**
����������(����Ҫ!):һ�����������Զ��ֹ��ܵ����á�������������ĸ��������Ͳ�ͬ��Ӧ����ͬ���ֵĲ�ͬ��������߸�����
����:1.ͬһ��������
     2.��������ͬ
     3.�����βεĸ�����˳�����Ͳ�ͬ
ע��:�����ķ���ֵ�ǲ�������Ϊ��������?Ϊʲô��
     ��������ʱ����д��������ֵ���͡���˷���ֵ������������������
**/
#include "iostream"
using namespace std;

/**
1.ͬһ�������£�����fuct����ȫ����������
2.��������ͬ: ������������fuct
3.�����βεĸ�����˳�����Ͳ�ͬ: funct()  funct(int a)
**/
void funct()
{

        cout<< "funct()�ĵ���"<<endl;
}

//����������ͬ
void funct(int a) //��Ĭ���βε�ռλ����
{
        cout<< "funct(int a)�ĵ���"<<endl;
}

//�������Ͳ�ͬ
void funct(double a) //��Ĭ���βε�ռλ����
{
        cout<< "funct(double a)�ĵ���"<<endl;
}


//����˳��ͬ
void funct(int a, double b) //��Ĭ���βε�ռλ����
{
        cout<< "funct(int a, double b)�ĵ���"<<endl;
}

void funct(double b, int a) //��Ĭ���βε�ռλ����
{
        cout<< "funct(double b, int a)�ĵ���"<<endl;
}


int main(void)
{
    funct();
    funct(10);//�������������ͬ����˵���funct(int a)
    funct(3.14);//�������Ͳ�ͬ����˵���funct(double a)

    funct(3.14, 10);//����˳��ͬ,��˵���funct(int a, double b)
    funct(10, 3.14);//����˳��ͬ,��˵���funct(double b, int a)


    cout<< "\r\n\r\n���������ַ�����\r\n"<<endl;
    cin.get();
    return 0;
}

/**
SUMMARIZE:
������������:
1.ͬһ��������
2.��������ͬ
3.�����βεĸ�����˳�����Ͳ�ͬ
4.�����ķ���ֵ�ǲ�������Ϊ��������
**/
