/**
ios::in  ios::out  ͬʱ��һ���ļ��ɶ���д
�Ȱ��ַ������뵽IO�ļ�
�ڰ�IO�ļ��������뵽str�ַ���
**/

#include "iostream"
#include "fstream"

using namespace std;

int main()
{
    fstream IO; //ԭ������ofstream/ifstream  ������ֶ���д ֻ�����ܵ���fstream
    static char str[50];

    IO.open( "test.txt", ios::in | ios::out ); //�͵�Ƭ��һ�� ios::in  = 0x01 =01b  ios::out==0x02 ==10b
                                             //��ͬ����ռ��ͬλ�����|��������Ӱ��
                                            //��in��out���ַ�ʽͬʱ���ļ�
    if( !IO )
    {
        cout << "�򲻿� ��ը" << endl;
        return 0;
    }

    IO<<"LLLLLLLLLLLLLQQQ"; //�������ֵ�IO  IOָ��test.txt"

    IO.seekg(ios::beg); //ʹ�ù��ָ���ļ�ͷ ����FATFS��f_leek(),   ios::end��ָ���ļ�β

    IO >> str;    //�����ļ����������ַ���
    cout << str <<endl;  //�ַ�����ӡ����

    IO.close(); //��ƨ��

    return 0;

}
