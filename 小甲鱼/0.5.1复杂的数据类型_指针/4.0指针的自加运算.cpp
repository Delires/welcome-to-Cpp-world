/**
ָ����Լ� ���ǵ�����1  ����+sizeof(type)
 reinterpret_cast<type>(����)   �ѱ���ǿ��ת��Ϊtype����
**/
#include "iostream"
#include "string"

using namespace std;
#define SIZE 5
int main(void)
{
    int in_arry[ SIZE] = {0, 1, 2, 3, 4};
    char ch_arry[ SIZE] = {'A', 'B', 'C', 'D', 'E'}; //�ַ�������  Ҫ���ַ��� ��������

    int *inPointer = in_arry;
    char *chPointer = ch_arry;

    for(int i=0; i<SIZE; i++)
    {
        cout<< *inPointer<< "  at  "<< inPointer << endl;//inPointer�ǵ�ֵַ��
        inPointer++;
    }
    cout<< "�ɴ˿ɼ�int��ռ4���ֽڣ���˵�ַÿ������4λ"<<endl;

    cout<< "\n\n"<<endl;

    for(int i=0; i<SIZE; i++)
    {
        cout<< *chPointer<< "  at  "<< chPointer << endl;
        chPointer++;                                          //chPointer�ǵ�ֵַ��
    }
    cout<< "char��ռ1���ֽڣ���˵�ַÿ������1λ"<<endl;

    cout<< "\r\n�ɴ˿ɼ���������ȴ洢char �ٴ洢int��"<<endl;
    cout<< "\r\n������� reinterpret_cast<int *> �Ļ���cout����ľͲ����ַ��������ַ�����ַ����������ֵ�أ�"<<endl;
 /**ԭ�����£��ַ����ֵ����־��ǵ�ַ��������������һ���ַ��ĵ�ַ�ͻᵱ���ַ��������
    ����C++���������ԣ����������ͬʱ�����㺭�壬һ���������ڴ���׵�ַ���������������֡�
    �����ǵ�ָ�����磺cout<<��������ʱ�򣬱�����������һ��ѡ�����ൽ������������������أ�
    �������Ԫ�ص�ַ�أ���������ݸ���ͳ�ƣ���������������Ϊ���Ǵ󲿷�ʱ������(�ӵ�ǰָ��λ�ÿ�ʼ)
    �����������ݣ������ǵ�ǰԪ�صĵ�ַ������˵���ⴿ���Ǳ�����Ϊ�����Լ�AI���������С�鷳����
    ��̫��ģ�������˼άϰ����:lol:��ˣ�������һ��ǿ��ת����ʽ������ȷ���߱���������������Ҫ���
    ���ǵ�ǰԪ�صĵ�ַ��
**/



    return 0;

}

