/**
���ã������������ʹ������ٵ�ֵ
       bool����ֻ������ֵ��
          true --- �棨������1 �������0��ֵ�������� ��
          false --- �٣�������0��
bool����ռ==1���ֽ�==��С
**/
#include "iostream"
using namespace std;

int main(void)
{
    cout<<"bool����ֻ����������true��false����Ϊ��������ֵ��ռ1���ֽڴ�С"<<endl;

    bool flag = false;
    cout<<"bool���͵�false="<<flag<<endl;
    flag = true;
    cout<<"bool���͵�true="<<flag<<endl;

    cout<<"bool���͵Ĵ�С="<<sizeof(bool)<<"byte"<<endl;



    cout << "\r\n\r\n\r\n�����������ַ���������"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
