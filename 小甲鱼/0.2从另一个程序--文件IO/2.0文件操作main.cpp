/**
����һ���ļ������ݵ���һ��
�����������mian()��������������ģ����ǳ����� main( int argc, char* argv[])����  argc�����˲���������  argv��ʾ����Ĳ�����ָ��
                                                                                                          argv[]���������Ҳ�����������ı������������Ϊ��һ������
����mian()���������������ֱ������ʱ�޷��򿪵ģ�Ҫwin+R cmd Ȼ��ѳ����Ͻ�ȥ(������·��)�����У����е��������Ҳ�������·��


**/

#include "iostream"
#include "fstream"

#define JIAYU 0
using namespace std;

#if(JIAYU)
int main()
{
    fstream IO; //fstream���ж����ļ�
    ofstream out;
    static char Copydata[88];

    IO.open("test.txt", ios::in | ios::out);
    out.open("testcopy.txt", ios::out);

    IO >> Copydata  ;  //�������ļ���ǰ �ļ�>>    �ļ�<<   ����������ǰ

    out << Copydata;

    IO.close();  //��ƨ��
    out.close();


}
#else

/**
����һ���ļ������ݵ���һ��
�����������mian()��������������ģ����ǳ����� main( int argc, char* argv[])����  argc�����˲���������  argv��ʾ����Ĳ�����ָ��
                                                                                                          argv[]���������Ҳ�����������ı������������Ϊ��һ������
����mian()���������������ֱ������ʱ�޷��򿪵ģ�Ҫwin+R cmd Ȼ��ѳ����Ͻ�ȥ(������·��)�����У����е��������Ҳ�������·��

**/
int main( int argc,  char* argv[])  //argc����ļ�����  argv����ļ���  �������Ҳ�����ļ�����
{
    fstream IO; //fstream���ж����ļ�
    ofstream out;
    static char Copydata[88];

    cout << "�ļ�����������������·������:E:xxx xxx" << endl;
    cout << "����ԭʼ�ļ���  Ҫ�������ݵ��ļ� " << endl;

    if( argc !=3 )
    {
        cout << "�����ļ���ʽ�д�Ӧ�ð��� ��������(���������)  ԭʼ�ļ���  Ҫ�������ݵ��ļ� ����˳��"  << endl;
        return  0; //��������
    }

    IO.open(argv[1], ios::in | ios::out);  //����if�ж�   IO.openû����ֵ
    if( !IO )
    {
        cout << "IOԭʼ�ļ���ʧ��" << endl;

        return  0; //��������
    }

    out.open(argv[2], ios::out );
    if( !out )
    {
        cout << "outҪ���Ƶ��ļ��д�ʧ��"  << endl;
        IO.close(); //��ƨ�ɴ�ԭʼ�ļ���ƨ��
    }


    while( IO >> Copydata   )
    {
        out << Copydata;
    }
   // IO >> Copydata  ;  //�������ļ�����ǰ �ļ�>>    �ļ�<<   ����������ǰ

    cout << "�ļ����Ƴɹ�"  << endl;

    IO.close();  //��ƨ��
    out.close();

    cout << "\r\n\r\n���������ַ�����\r\n"  << endl;
    cin.get();
    return  0; //��������

}




#endif
