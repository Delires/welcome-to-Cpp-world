/**
复制一个文件的内容到另一个
这个函数属于mian()函数有输入参数的，且是常见的 main( int argc, char* argv[])类型  argc代表了参数的数量  argv表示输入的参数的指针
                                                                                                          argv[]的输入参数也包括这个程序的本身，这个程序本身为第一个参数
这种mian()函数有输入参数的直接运行时无法打开的，要win+R cmd 然后把程序拖进去(或输入路径)来运行，运行的输入参数也必须包含路径

**/

#include "stdio.h"
#include "stdlib.h"
#include "windows.h"


#define EXIT_SUCCESS 0  //正常执行程序并退出程序。
#define EXIT_FAILURE 1  //非正常执行导致退出程序

int main( int argc, char* argv[])
            //argc含义是程序参数数量   argv的指针指向每个命令行的字符串
{
    FILE *in, *out; //文件句柄
    int ch;

    if( argc != 3) //输入不是3个 输入参数有错。 输入参数也包括程序的本身，程序本身就是第一个参数
    {
        fprintf( stderr, "输入形式：copyfile   源文件名   目标文件"); //fprintf拼接打印
                         //stderr在屏幕输出
        exit( EXIT_FAILURE); //程序不正常推出
        system("pause");

    }

    if( (in = fopen( argv[1], "rb"))==NULL ) //打开主函数的输入的第二个参数
    {                         //rb=read binary 可读二进制文件形式
        fprintf( stderr, "打不开文件：%s\n", argv[1] ); //fprintf拼接打印
        exit( EXIT_FAILURE); //程序不正常推出
        system("pause");
    }

    if( (out = fopen( argv[2], "wb"))==NULL )//打开主函数的输入的第三个参数
    {                      //wb=write binary 可写二进制文件形式
        fprintf( stderr, "打不开文件：%s\n", argv[2] ); //fprintf拼接打印
                                             //stderr标准错误流 就类似一种指令
        fclose( in );     //打开失败，擦屁股把上一个也关了
        exit( EXIT_FAILURE); //程序不正常推出
        system("pause");
    }

    while( (ch = getc(in)) != EOF ) //EOF == end of file  文件的结尾一般都是EOF
    {

        if( putc(ch, out) == EOF) //循环体是把ch的内容写到out文件里
        {                      //如果ch的内容==文件结尾直接退出循环
            break;
        }
        //system("pause");
    }

    if( ferror(in) )  //ferror()检测文件是否错误，因为前面返回EOF有两个原因，要么文件读/写完了，要么文件读/写发生错误
    {
        printf("读写文件%s失败", argv[1]);

    }
    if( ferror(in) )
    {
        printf("写入文件%s失败", argv[2]);

    }

    printf("成功复制一个文件！\n");

    fclose(in);
    fclose(out); //打开后记得关闭，擦屁股

    return 0;

}



