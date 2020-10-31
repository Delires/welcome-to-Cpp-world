/**
复制一个文件的内容到另一个
这个函数属于mian()函数有输入参数的，且是常见的 main( int argc, char* argv[])类型  argc代表了参数的数量  argv表示输入的参数的指针
                                                                                                          argv[]的输入参数也包括这个程序的本身，这个程序本身为第一个参数
这种mian()函数有输入参数的直接运行时无法打开的，要win+R cmd 然后把程序拖进去(或输入路径)来运行，运行的输入参数也必须包含路径


**/

#include "iostream"
#include "fstream"

#define JIAYU 0
using namespace std;

#if(JIAYU)
int main()
{
    fstream IO; //fstream类中定义文件
    ofstream out;
    static char Copydata[88];

    IO.open("test.txt", ios::in | ios::out);
    out.open("testcopy.txt", ios::out);

    IO >> Copydata  ;  //必须是文件在前 文件>>    文件<<   变量不能再前

    out << Copydata;

    IO.close();  //擦屁股
    out.close();


}
#else

/**
复制一个文件的内容到另一个
这个函数属于mian()函数有输入参数的，且是常见的 main( int argc, char* argv[])类型  argc代表了参数的数量  argv表示输入的参数的指针
                                                                                                          argv[]的输入参数也包括这个程序的本身，这个程序本身为第一个参数
这种mian()函数有输入参数的直接运行时无法打开的，要win+R cmd 然后把程序拖进去(或输入路径)来运行，运行的输入参数也必须包含路径

**/
int main( int argc,  char* argv[])  //argc存放文件个数  argv存放文件名  输入参数也包括文件本身
{
    fstream IO; //fstream类中定义文件
    ofstream out;
    static char Copydata[88];

    cout << "文件的输入必须包括完整路径，如:E:xxx xxx" << endl;
    cout << "输入原始文件名  要复制内容的文件 " << endl;

    if( argc !=3 )
    {
        cout << "输入文件格式有错，应该按照 操作程序(程序本身就算)  原始文件名  要复制内容的文件 这种顺序"  << endl;
        return  0; //结束函数
    }

    IO.open(argv[1], ios::in | ios::out);  //不能if判断   IO.open没返回值
    if( !IO )
    {
        cout << "IO原始文件打开失败" << endl;

        return  0; //结束函数
    }

    out.open(argv[2], ios::out );
    if( !out )
    {
        cout << "out要复制的文件夹打开失败"  << endl;
        IO.close(); //擦屁股打开原始文件的屁股
    }


    while( IO >> Copydata   )
    {
        out << Copydata;
    }
   // IO >> Copydata  ;  //必须是文件名在前 文件>>    文件<<   变量不能再前

    cout << "文件复制成功"  << endl;

    IO.close();  //擦屁股
    out.close();

    cout << "\r\n\r\n输入任意字符结束\r\n"  << endl;
    cin.get();
    return  0; //结束函数

}




#endif
