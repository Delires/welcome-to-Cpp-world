/**
������C++������Ҳ������ͬ���ķ���ʵ�֣���C++�ṩ�˸��õ�std:��string���ͣ��������ǲ�����ʹ����ʽ��C��������
������ϰ��
һ��ֱ�����C��C++ʵ�ֽ��û�������ַ�����ӡ����~
c������scanf()   c++�аѱ�������Ϊstring���ͣ����ø�ֵ��cin���Զ����ȥ
**/
#include "iostream"
#include "string" //string��ͷ�ļ�
using namespace std;

int main(void)
{
    string str;
    cout<< "������һ���ַ�:";
    //cin >> str; //�пո�ͽ����ˣ�����ʶ�𣬿��Ը�Ϊ����
    getline(cin, str);//����getline()������ֱ�Ӱ�һ�����ָ�str
    cout<< "�����ַ�Ϊ:" <<str <<endl;

    return 0;
}
