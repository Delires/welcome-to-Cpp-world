/**
����fstream���е� in�����.open��Ϊ  ��  in�����.close��Ϊ ���ļ�������������console����̨
                              ����˵���Ƕ�ȡ�ļ�����
C++��������C��
**/
#include "fstream" //fstream���к�in����
#include "iostream"//iostream���� cin �� cout �������������

#define JIAYU 1
using namespace std;

#if(JIAYU)
int main()
{
    ifstream in; //ifstream �������ļ���Ϊin
    in.open( "test.txt" ); //Ĭ�ϴ�ͬһ�ļ����ļ�

    if( !in )//��ʧ�ܷ���0
    {
        cerr<< "�ļ��򿪴���" << endl;  //cerr�ļ�����������ר�����������Ϣ
        return 0;
    }

    char x; //�洢�����ֵ

    while( in >> x) //�Ѵ򿪵��ļ�ֵ in����x
    {             //ÿ����һ���ַ���ֱ���������ѭ��
        cout << x;   //x����cout
    }
    cout << endl;   //��ӡcout

    in.close( ); //�򿪹رղ�ƨ�ɣ�����д�ļ���

    return 0;
}
/**
�ո�û�����������Ϊ char x;  �洢�����ֵ��char�� �ո��� ���Ծ���������
                            ����������INT��  ��û���ַ� �ַ���������
**/

#else

int main(void)
{
    ifstream in;
    in.open( "test.txt" );
    if( !in )
    {
        cerr << "���ļ�����" <<endl;
        return 0;
    }

    char x;


    while( in >> x)
    {
        cout << x;
       if(cin.peek() == ' ')
       {
           cout << ' ';
       }
    }


    cout << endl;

    in.close(); //��ƨ��

    return 0;

}


#endif
