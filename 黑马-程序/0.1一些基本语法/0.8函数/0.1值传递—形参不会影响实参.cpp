/**
ֵ���ݷ���ʱ���ββ���Ӱ��ʵ�Σ������뺯����ʵ�Σ����ᱻ������Ӱ��ʵ�ε�ֵ������ֻ��������Լ����β�
Ϊʲô? �����
**/
**/
#include "iostream"
using namespace std;

void exchange(int num1, int num2)
{
    int temp;

    cout<< "����ǰ���β�ֵ:"<<endl;
    cout<< "num1="<<num1<<endl;
    cout<< "num2="<<num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<< "��������β�ֵ:"<<endl;
    cout<< "num1="<<num1<<endl;
    cout<< "num2="<<num2<<endl;



}


int main(void)
{
    int a = 10;
    int b = 20;

    cout<< "���ݵ�����ǰ��ʵ��ֵ"<<endl;
    cout<< "a="<<a<<endl;
    cout<< "b="<<b<<endl;

    cout<< "\r\n\r\n"<<endl;
    exchange(a, b);
    cout<< "\r\n\r\n"<<endl;

    cout<< "���ݵ��������ʵ��ֵ"<<endl;
    cout<< "a="<<a<<endl;
    cout<< "b="<<b<<endl;

    cout<< "���ݵ�����ǰ���ʵ��ֵ��Ϊ�����ı�"<<endl;
    cout<< "ֵ���ݷ���ʱ���ββ���Ӱ��ʵ�Ρ����뺯����ʵ�Σ����ᱻ������Ӱ��ʵ�ε�ֵ������ֻ��������Լ����β�"<<endl;

    return 0;
}
/**
Ϊʲô?
��int a, b;����ʱ���ڴ�Ὺ�������ռ�洢������ֵ��
�ڵ��ú���exchange(int num1, int num2)���ֻ��num1,num2���������ռ䴫��a,bֵ��
 Ȼ�����ͻ��num1,num2���в���������δ��a,b�Ĵ洢�ռ������
����ˣ�ֵ�����β��޷�Ӱ�쵽ʵ�ε�ֵ
**/
