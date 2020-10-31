/**
����һ���ļ������ݵ���һ��
�����������mian()��������������ģ����ǳ����� main( int argc, char* argv[])����  argc�����˲���������  argv��ʾ����Ĳ�����ָ��
                                                                                                          argv[]���������Ҳ�����������ı������������Ϊ��һ������
����mian()���������������ֱ������ʱ�޷��򿪵ģ�Ҫwin+R cmd Ȼ��ѳ����Ͻ�ȥ(������·��)�����У����е��������Ҳ�������·��

**/

#include "stdio.h"
#include "stdlib.h"
#include "windows.h"


#define EXIT_SUCCESS 0  //����ִ�г����˳�����
#define EXIT_FAILURE 1  //������ִ�е����˳�����

int main( int argc, char* argv[])
            //argc�����ǳ����������   argv��ָ��ָ��ÿ�������е��ַ���
{
    FILE *in, *out; //�ļ����
    int ch;

    if( argc != 3) //���벻��3�� ��������д� �������Ҳ��������ı�����������ǵ�һ������
    {
        fprintf( stderr, "������ʽ��copyfile   Դ�ļ���   Ŀ���ļ�"); //fprintfƴ�Ӵ�ӡ
                         //stderr����Ļ���
        exit( EXIT_FAILURE); //���������Ƴ�
        system("pause");

    }

    if( (in = fopen( argv[1], "rb"))==NULL ) //��������������ĵڶ�������
    {                         //rb=read binary �ɶ��������ļ���ʽ
        fprintf( stderr, "�򲻿��ļ���%s\n", argv[1] ); //fprintfƴ�Ӵ�ӡ
        exit( EXIT_FAILURE); //���������Ƴ�
        system("pause");
    }

    if( (out = fopen( argv[2], "wb"))==NULL )//��������������ĵ���������
    {                      //wb=write binary ��д�������ļ���ʽ
        fprintf( stderr, "�򲻿��ļ���%s\n", argv[2] ); //fprintfƴ�Ӵ�ӡ
                                             //stderr��׼������ ������һ��ָ��
        fclose( in );     //��ʧ�ܣ���ƨ�ɰ���һ��Ҳ����
        exit( EXIT_FAILURE); //���������Ƴ�
        system("pause");
    }

    while( (ch = getc(in)) != EOF ) //EOF == end of file  �ļ��Ľ�βһ�㶼��EOF
    {

        if( putc(ch, out) == EOF) //ѭ�����ǰ�ch������д��out�ļ���
        {                      //���ch������==�ļ���βֱ���˳�ѭ��
            break;
        }
        //system("pause");
    }

    if( ferror(in) )  //ferror()����ļ��Ƿ������Ϊǰ�淵��EOF������ԭ��Ҫô�ļ���/д���ˣ�Ҫô�ļ���/д��������
    {
        printf("��д�ļ�%sʧ��", argv[1]);

    }
    if( ferror(in) )
    {
        printf("д���ļ�%sʧ��", argv[2]);

    }

    printf("�ɹ�����һ���ļ���\n");

    fclose(in);
    fclose(out); //�򿪺�ǵùرգ���ƨ��

    return 0;

}



