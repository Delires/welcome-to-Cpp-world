#include "iostream" //iostreamͷ�ļ������� istream��ostream��������
                    //istream�������cin���� ostream������cout����
using namespace std; //�����ռ� ��ֹ ��������������
#define SIZE 50
int main(void)
{
    char buf[SIZE];
    cout << "����һ���ı�\n" ; //����� ��"����һ���ı�\n"�����cout
    cin.read(buf, 20); //����������cin��read��Ϊ����ȡbuf��ǰ20����
                       //����Ϊbuf �� 20����
    cout<<"�ַ��ռ������ݸ���Ϊ��"
                 <<cin.gcount()<<endl; //����������cin��gcount��Ϊ:��ȡ�������ݵĸ���
                                       //endl ����+���� ��
    cout << "������ı���ϢΪ��";
    cout.write(buf, 40) ; // ����cout�������ʽ ���������cout��write��Ϊ:����buf��20�����ݴ�ӡ����
    cout<<endl;

}
