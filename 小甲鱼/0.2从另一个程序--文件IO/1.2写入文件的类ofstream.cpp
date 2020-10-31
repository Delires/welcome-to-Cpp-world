/**
ofstram类 写入文件用 把数据流入到文件夹中
"test.txt"文件夹的值 会被流向out的值覆盖掉
**/
#include "iostream"
#include "fstream"

#define JIAYU 1
using namespace std;

#if(JIAYU)

int main()
{
    ofstream out; //定义输出流对象

    out.open( "test.txt" );

    if( !out )
    {
        cerr << "文件打开失败" <<endl;
        return 0;
    }

    for( int i=0; i<10; i++)
    {
        out << i; //把i的值流向out对象  out对象指的是"test.txt"
    }
    out << endl;

    out.close();


    return 0;

}

#else

int main()
{
    ofstream out; //定义输出流对象

    out.open( "test.txt" );

    if( !out )
    {
        cerr << "文件打开失败" <<endl;
        return 0;
    }

    for( int i=0; i<10; i++)
    {
        out << i; //把i的值流向out对象  out对象指的是"test.txt"
    }
    out << endl;

    out.close();


/**把更改的文件夹内容输出**/
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
