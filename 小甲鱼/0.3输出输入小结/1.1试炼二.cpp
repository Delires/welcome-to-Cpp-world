/**
��������
��Ŀ����дһ���¶�ת������������Cת��Ϊ����.��xxx.xC����xxx.xFת��
Ҫ��
����û�����34.2C�����90.32F
Ҫ�㣺�������C��F����ʶ��Ȼ��ת��
**/

//�����¶� == �����¶� * 9 /5 +32
//�����¶� == �����¶�-32 * 5 / 9
//ע�⣬\�����ǲ���С���� �� ���Ҫ��С��Ҫ����Ϊdouble�� ��5.0/9.0 ����.0


/**
const �� #define ֮��
    ��   �����ý׶���˵: #define��Ԥ����׶������ã�const�ڱ�������ʱ������
    ��	�洢����: #defineռ����οռ䣬constռ���ݶοռ䡣#define��Ƚϸ���ʡ�ڴ档
    ��	const���Ե���  #define����
    ��	#define��C�г���  const��c++����
**/
#define JIAYU 0
#include "iostream"
using namespace std;

#if JIAYU
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
                 TempOut = TempIn * RATIO + ADD_SUBSTRACT;
                 TypeOut = 'F';
                 TypeIn = 'C';
                 break; //�����˽�����

            case 'F':
            case 'f':
                 TempOut = (TempIn  - ADD_SUBSTRACT) /RATIO;
                 TypeOut = 'C';
                 TypeIn = 'F';
                 break; //�����˽�����

            default:
                 TypeOut = 'E';
                 break;
        }
//С����Ĵ��������жϣ���������Ͳ�����¶�ת��ֵ��
    if( TypeOut != 'E')
    {
        cout <<"�¶�ת��ֵΪ:"<<TempIn<<TypeIn
             << "=" <<TempOut<<TypeOut << "\n\n"<< endl;
    }
    else
    {
        cout <<"��������밴��[xx.xC]��[xx.xF]�ĸ�ʽ"<< endl;
    }

//�²��ַ�ֹ����һ������ С�����Ĳ��֣���.EXE����ʱ������һ������
    cout << "�����������ַ���������"<< "\n\n"<<endl;
    cin.get();
    return 0;
}


#else
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
    std::cin.ignore(100, '\n');//������������ǰһ�ٵ��ַ����������\n �Ļ�����ô��\n ֮ǰ���ַ�ȫ�����Ե���

    //cout<<TempIn<<endl; //���Բ���
    //cout<<TypeIn<<endl;
    switch (TypeIn)
        {
            case 'C':
            case 'c':
                 TempOut = TempIn * RATIO + ADD_SUBSTRACT;
                 TypeOut = 'F';
                 TempIn = 'C';
                 break; //�����˽�����

            case 'F':
            case 'f':
                 TempOut = (TempIn  - ADD_SUBSTRACT) /RATIO;
                 TypeOut = 'C';
                 TempIn = 'F';
                 break; //�����˽�����

            default:
                cout<< "��������밴��[xx.xC]��[xx.xF]�ĸ�ʽ"<<endl;
                break;
        }

    cout <<"ת������¶�Ϊ:" << TempOut<<TypeOut<< "\n\n" << endl;

//ģ��С����ӵ�
    cout << "������.exeʱ��ֹ����һ�������������������ַ�\n\n"<<endl;
    cin.get();

    return 0;
}

#endif

