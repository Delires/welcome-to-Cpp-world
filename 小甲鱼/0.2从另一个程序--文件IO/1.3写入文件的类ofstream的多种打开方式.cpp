#include "iostream"
#include "fstream"

using namespace std;

int main()
{
    ofstream out;
    char DATA[100] = "MENGDISHIGOU";
    out.open( "test.txt", ios::app); //按照写入的数据追加到文件的末尾的方式打开文件

    if( !out )
    {
        cout << "打不开 爆炸" << endl;
    }

    for( int i=0; i<50 ;i++)
    {
        out <<  DATA[i];
    }

    out << endl;

    out.close(); //擦屁股

    return 0;

}

