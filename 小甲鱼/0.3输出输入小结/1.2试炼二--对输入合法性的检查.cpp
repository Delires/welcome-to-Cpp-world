/**
������Ϸ��ԵĽ�һ���������
1.�Ϸ��Լ��:question2����񰴡�\n����ô�죿
   ��һ���жϣ�ÿ��\n��Ķ������
2.�Ϸ��Լ��:������¶�һ���Ͳ��������¶���ô�죿
   ��һ���жϣ�ÿ�¶Ȳ��������˳�

**/

#include "iostream"
using namespace std;

int main(void)
{
    const unsigned short ADD_SUBSTRACT = 32.0;
    const double RATIO                 = 9.0/5.0;
      //����ħ��������ͬ��Ҳ������#define ��const��#define��ʲô�����أ�

    double TempIn, TempOut; //cin����ĸ����ͱ��� �����뵽double����
    char TypeIn, TypeOut;  //cin������ַ��ͱ��� �����뵽char����
    //cin >> TempIn;
    //cin >> TypeIn;

    cout << "�밴���ϻ�������һ���¶ȣ���[xx.xC]��[xx.xF]�ĸ�ʽ" <<endl;
    cin >>  TempIn >> TypeIn;//����ֿ�д���ĸ��������Զ���ȡ��ͬ�����뵽������
                          //��ȡ���������ַ���Ҫ��get.line();
                          //ע�������˳������
    std::cin.ignore(100, '\n');//���������ʼ��������������ǰһ�ٵ��ַ����������\n �Ļ�����ô��\n ֮ǰ���ַ�ȫ�����Ե���
                               //Ϊ�����������������֮��Ļ���
    //cout<<TempIn<<endl; //���Բ���
    //cout<<TypeIn<<endl;
    switch (TypeIn)
        {
            case 'C':
            case 'c':
                 if( (TempIn > 1000.0) || (TempIn < -1000.0) ) //�¶����벻����
                 {
                     //cout << "�¶�������󣬲��ٷ�Χ��"<< endl;
                     TempOut = 0;
                     //cout << TempOut;
                     break;

                 }
                 else
                 {
                    TempOut = TempIn * RATIO + ADD_SUBSTRACT;
                    TypeOut = 'F';
                    TypeIn = 'C';
                    break; //�����˽�����
                 }


            case 'F':
            case 'f':
                if( (TempIn > 1000.0) || (TempIn < -1000.0) ) //�¶����벻����
                 {
                     //cout << "�¶�������󣬲��ٷ�Χ��"<< endl;
                     TempOut = 0;
                      //cout << TempOut;
                     break;

                 }
                 else
                 {
                    TempOut = (TempIn  - ADD_SUBSTRACT) /RATIO;
                    TypeOut = 'C';
                    TypeIn = 'F';
                    break; //�����˽�����
                 }


            default:
                 TypeOut = 'E';
                 break;
        }
//С����Ĵ��������жϣ���������Ͳ�����¶�ת��ֵ��
    if( (TypeOut != 'E') && (TempOut != 0) )
    {
        cout <<"�¶�ת��ֵΪ:"<<TempIn<<TypeIn
             << "=" <<TempOut<<TypeOut << "\n\n"<< endl;
    }

    else
    {
        cout <<"��������밴��[xx.xC]��[xx.xF]�ĸ�ʽ, ���¶�Ҫ��-1000~1000֮��"<< endl;
    }

//�²��ַ�ֹ����һ������ С�����Ĳ��֣���.EXE����ʱ������һ������
    cout << "�����������ַ���������"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
