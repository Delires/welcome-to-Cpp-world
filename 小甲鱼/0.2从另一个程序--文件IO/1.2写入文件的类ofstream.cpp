/**
ofstram�� д���ļ��� ���������뵽�ļ�����
"test.txt"�ļ��е�ֵ �ᱻ����out��ֵ���ǵ�
**/
#include "iostream"
#include "fstream"

#define JIAYU 1
using namespace std;

#if(JIAYU)

int main()
{
    ofstream out; //�������������

    out.open( "test.txt" );

    if( !out )
    {
        cerr << "�ļ���ʧ��" <<endl;
        return 0;
    }

    for( int i=0; i<10; i++)
    {
        out << i; //��i��ֵ����out����  out����ָ����"test.txt"
    }
    out << endl;

    out.close();


    return 0;

}

#else

int main()
{
    ofstream out; //�������������

    out.open( "test.txt" );

    if( !out )
    {
        cerr << "�ļ���ʧ��" <<endl;
        return 0;
    }

    for( int i=0; i<10; i++)
    {
        out << i; //��i��ֵ����out����  out����ָ����"test.txt"
    }
    out << endl;

    out.close();


/**�Ѹ��ĵ��ļ����������**/
    ifstream in;
    in.open( "test.txt" );
    int x;
    while( in >> x)
    {
        cout << x;
    }
    cout << endl;
    in.close();


    return 0;

}

#endif
