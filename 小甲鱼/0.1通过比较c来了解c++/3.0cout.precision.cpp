/**
cout����� precision��Ϊ�Ĳ���
cout.precision()����̶���С����λ��
**/
#include "iostream" //����istream ostream����
                //istream�������cin����    ostream�������cout����
#include "math.h"

using namespace std;  //�����ռ� ��ֹ��������������

int main(void)
{
    double result;
    result = sqrt(3.0);

    cout << "��3.0�Ŀ������� �������0~9λС���㣬������£�\r\n";

    for(int i=1; i<=9; i++)
    {
        cout.precision(i);     //����cout�����.precision��Ϊ���������Чλ��
        cout << result <<endl; //��result����cout������������
    }

    cout << "��ǰ�������Ϊ" << cout.precision() << endl;  //�����ǰ���������
}

