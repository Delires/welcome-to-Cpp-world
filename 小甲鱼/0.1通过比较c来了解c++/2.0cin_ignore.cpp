/**
cin_ignore() �� cin.getline() ���÷�
�м��ַ������������һ���ַ���\0,��char xx[10]ֻ������19���ַ�����20���Զ���\0
**/
#include "iostream" //iostream����istream��ostream�࣬
            //istream����cin����  ostream����cout����
using namespace std;  //�����ռ� ��ֹ��ͬ����������֮�����
//�������˼�봦��
int main(void)
{
    char data[20];
 //cin֪����δ��û��ն���ȡ���ݣ�cin������ȡ����������һ�δ� ����������cin�� ��ȡһ������
 //���û���������ʱ����Ӧ���ַ��ͻ����뵽���̻������������»س������ݾͻ�Ӽ��̻��������������� ����������cin��

    cin.ignore(7);  //���������Ϊ�Ǻ��� ����������cin ��ǰ7��   ������7
    cin.getline(data, 15);//���������Ϊ�ǵõ�cin�������ĺ�15�� ���Ҹ�data
                          //������data �� 15

    cout << data <<endl;  //cout���������data endl�����һس�
                          //<< ��data��ֵ����cout

    return 1;
}
