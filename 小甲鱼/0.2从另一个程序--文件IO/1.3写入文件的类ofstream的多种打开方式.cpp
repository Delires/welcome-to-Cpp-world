#include "iostream"
#include "fstream"

using namespace std;

int main()
{
    ofstream out;
    char DATA[100] = "MENGDISHIGOU";
    out.open( "test.txt", ios::app); //����д�������׷�ӵ��ļ���ĩβ�ķ�ʽ���ļ�

    if( !out )
    {
        cout << "�򲻿� ��ը" << endl;
    }

    for( int i=0; i<50 ;i++)
    {
        out <<  DATA[i];
    }

    out << endl;

    out.close(); //��ƨ��

    return 0;

}

