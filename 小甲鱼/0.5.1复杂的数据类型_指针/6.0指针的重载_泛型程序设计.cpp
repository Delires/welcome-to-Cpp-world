/**
ָ����Ϊ������������ض������̫�鷳�����ǿ��Է��ͳ������
template <typename xxx> Ȼ�����غ��������Ķ������ xxx name
����������һ���������������е�������������Ͳ��ã�������ͬ ��ʵ����ͬĿ�ĳ���
**/
#include "iostream"
using namespace std;
#define SIZE 5

template <typename compatible> //���ͳ��������� �������compatible
int ShowArray( compatible *pBegin, compatible *pEnd) //�ö���ı���compatible ȥ�����β� �����β�ƥ�����б�����ʽ
{
    while( *pBegin != *pEnd)
    {
        cout << *pBegin << "  ";
        pBegin++;
    }
}

int main(void)
{
    int in_arry[ SIZE] = {0, 1, 2, 3, 4};
    char ch_arry[ SIZE] = {'A', 'B', 'C', 'D', 'E'}; //�ַ�������  Ҫ���ַ��� ��������

    int *inPointer = in_arry;
    char *chPointer = ch_arry;

    ShowArray( inPointer, inPointer+5);
    cout << endl;
    cout << endl;
    ShowArray( chPointer, chPointer+5);

}
