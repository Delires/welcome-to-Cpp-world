#include "iostream" //iostream����istream��ostream������
                    //ostream����cout�������   iostream����cin�������
                    //cout cin�������������в�ͬ����Ϊ ��cin.peek cin.get
using namespace std; //�﷨�涨 �����ռ� ��ֹ ���������ظ�

//int main(void)
//{
//    char p;
//    cout << "������һ���ı�:\n" ; // << "������һ���ı�:\n"���������cout ����̨���
//
//    while(cin.peek() != '\n') //cin���������� �ļ��Ԫ����Ϊcin.peek()
//                         //����������Ķ����ǲ���'\n'
//    {
//        p = cin.get();  //cin.get ����������õ����ݵ���Ϊ  �õ������ݸ�p
//        cout << p ;  //��p��ֵ������ ����̨���cout
//    }
//
//    cout << endl;   //����̨��� ֱ������
//
//    return 0;
//}
//
//



int main(void)
{

    char str[10];
    while(cin >> str)
    {
        if( cin.peek() == '\n')
        {
            break;
        }
    }

    cout << "����ֵΪ:"<< str <<endl;

    return 0;


}
