/**
ͬ������c��c++�ֱ��д�������2------Cƪ
Ҫ�󣺱�дһ������Ҫ���û�����һ��������������Ŀ�Ŀո���Щ��������λ��ͬһ���У�
      ����������ڸ����е��κ�λ�á����û����¼����ϵġ�Enter����ʱ��������������������Զ�
      �����е�����������Ͳ���ӡ�������
**/

#include "stdio.h"
#include "stdlib.h"

#define JIAYU 0
#if(JIAYU)
scanfֻ�ܽ������֣��������������getchar
int main(void)
{

    int i=0;
    int sum=0;
    char ch;

    printf("������������֣�")
    while( scanf("%d", &i) == 1 )
    {
        sum += i;

        while( (ch = getchar()) == ' ');  //���ŵ�����Ҫ��getchar   scanf�����������
                                //ֻҪ��������Ͷ��浽������stdin�getchar�ı����ǰ�����������ַ���ȡ����
        if( ch == '\n')
        {
            break;
        }

        ungetc(ch, stdin);  //�ѽ��յ����ַ�ch�˻ص�������stdin�У� ���������Կ���һ������ר�Ŵ�ż��̵�����
                 //������˻أ���ôscanf���յ����ݾͻ����
                 //Ϊʲô�˻ص��������Ų����

    }


    printf("%d ", sum);
}


#else
int main(void)
{

    int data[100]={0};
    int sum=0;
    char ch;
    int j,i=0;


   for(i=0; ; i++)
   {
       scanf("%d", &data[i]);
       if( (ch = getchar()) =='\n')  //scanfֻ�ܽ������֣��������������getchar
       {
           break;
       }
       if( ch== ' ') //һ��Ҫ�ѡ� �����ĵ� ��Ȼ�����   �������������getchar
       {

       }
   }

   j = i;
   printf("�������ĸ��� = %d ", j);

   for(i=0; i<=j; i++)
   {
       sum +=  data[i];
   }


    printf("%d ", sum);
}

#endif






