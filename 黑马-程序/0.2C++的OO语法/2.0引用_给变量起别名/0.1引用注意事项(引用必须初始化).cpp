/**
�﷨:��������� �������� &���� = ԭ��;
����ע������:�������������ñ���ʱ���г�ʼ�������ó�ʼ��֮���ܸı�
             int &b; &b=a; //����,�����b�ĵ�ַΪa��ֵ��
             int &b=a; &b=c; //����
**/
#include "iostream"
using namespace std;
int main(void)
{
//�������������ñ���ʱ���г�ʼ����֮���ܸı�
    int a =10;
    int c =20;
    //int &b ;//error: 'b' declared as reference but not initialized|
    int &b =a;
    b =c; //���ǰ�c��ֵ���Ƹ�b��a�����������ø���   ���ó�ʼ��֮���ܸı�


    cout<< "a="<<a<< endl;
    cout<< "b="<<b<< endl;
    cout<< "c="<<c<< endl;






    cout<< "\r\n\r\n�������ַ���������������\r\n"<< endl;
    cin.get();
    return 0;
}
