/**
��Cʵ�ֽ��û�������ַ�����ӡ����~
c������scanf()   c++�аѱ�������Ϊstring���ͣ����ø�ֵ��cin���Զ����ȥ
**/
#include "stdio.h"
int main(void)
{
    char string[]="";
    printf("������һ���ַ�Ϊ��");
    scanf("%s", &string);

    printf("������ַ�Ϊ��");
    printf("%s", string);
}
