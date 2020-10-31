/**
运用fstream类中的 in对象的.open行为  和  in对象的.close行为 把文件的内容流出到console控制台
                              简单来说就是读取文件内容
C++看起来比C简单
**/
#include "fstream" //fstream类中含in对象
#include "iostream"//iostream含有 cin 和 cout 输出输入流对象

#define JIAYU 1
using namespace std;

#if(JIAYU)
int main()
{
    ifstream in; //ifstream 输入流文件名为in
    in.open( "test.txt" ); //默认打开同一文件的文件

    if( !in )//打开失败返回0
    {
        cerr<< "文件打开错误" << endl;  //cerr文件错误的输出，专门输出错误信息
        return 0;
    }

    char x; //存储输入的值

    while( in >> x) //把打开的文件值 in流到x
    {             //每次流一个字符，直到流完结束循环
        cout << x;   //x流到cout
    }
    cout << endl;   //打印cout

    in.close( ); //打开关闭擦屁股，不用写文件名

    return 0;
}
/**
空格没输出来，是因为 char x;  存储输入的值是char型 空格不是 所以就流不进了
                            如果定义的是INT型  则没有字符 字符流不尽进
**/

#else

int main(void)
{
    ifstream in;
    in.open( "test.txt" );
    if( !in )
    {
        cerr << "打开文件错误" <<endl;
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

    in.close(); //擦屁股

    return 0;

}


#endif
