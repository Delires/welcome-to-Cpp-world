/**
�ڳ�������������exe��ִ�г���δִ�иó���ǰ����Ϊ��������
2.ȫ����:ȫ�ֱ����;�̬��������ڴ�,ȫ������������ ȫ�ֱ���   ��̬static����  �ַ���""����  const���ε�ȫ��
        ������������ڳ���������ɲ���ϵͳ�ͷ�

**/
#include "iostream"
using namespace std;
#define XX 100

int q_a = 10;
int q_b = 10;
const int q_d = 10;
const int q_c = 10;

int main(void)
{
    int a = 10;
    int b = 10;
    cout << "�ֲ�����a�ĵ�ַΪ:"<< &a<< endl; //����ջ��,ջ���ĵ�ַ�ǵݼ���
    cout << "�ֲ�����b�ĵ�ַΪ:"<< &b<< endl;


    cout << "ȫ�ֱ���q_a�ĵ�ַΪ:"<< &q_a<< endl;
    cout << "ȫ�ֱ���q_b�ĵ�ַΪ:"<< &q_b<< endl;

    static int s_a = 10;
    static int s_b = 10;
    cout << "��̬����s_a�ĵ�ַΪ:"<< &s_a<< endl;
    cout << "��̬����s_b�ĵ�ַΪ:"<< &s_b<< endl;

//������Ϊ:�ַ�������""�������� �� const���εĳ���
   //�ַ�������""�ĵ�ַ
    cout << "�ַ��������ĵ�ַΪ:"<< &"hello world" << endl;
   //const���εĳ����ĵ�ַ  �ַ�Ϊconst���ε�ȫ�ֺ;ֲ�����
    cout << "const���ε�ȫ��q_d�ĵ�ַΪ:"<< &q_d<< endl;
    cout << "const���ε�ȫ��q_c�ĵ�ַΪ:"<< &q_c<< endl;

    const int c_a = 10;
    const int c_b = 10;
    cout << "const���εľֲ�����c_a�ĵ�ַΪ:"<< &c_a<< endl;
    cout << "const���εľֲ�����c_b�ĵ�ַΪ:"<< &c_b<< endl;



//�ó�����:
   cout << "\r\n\r\n�ó�����:"<<  endl;
   cout << "��ȫ������ŵ�������:"<<  endl;
   cout << "ȫ�ֱ���   ��̬static����  �ַ���""����  const���ε�ȫ��"<<  endl;
   cout << "����ȫ������������:"<<  endl;
   cout << "�ֲ�����  const���εľֲ�����"<< endl;



   cout<< "\r\n\r\n�����ַ��������\r\n"<<endl;
    cin.get();
    return 0;

}

/**
����:
* C++���ڳ�������ǰ��Ϊȫ�����ʹ�����
* �������ص��ǹ����ֻ��
* ȫ�����д��ȫ�ֱ�������̬����������
* �������а��� const���ε�ȫ�ֳ���  �� �ַ�������     ������const���εľֲ�����

**/
