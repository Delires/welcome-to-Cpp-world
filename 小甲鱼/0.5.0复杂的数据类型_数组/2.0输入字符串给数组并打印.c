/**
用C实现将用户输入的字符串打印出来~
c语言用scanf()   c++中把变量定义为string类型，不用赋值，cin会自动存进去
**/
#include "stdio.h"
int main(void)
{
    char string[]="";
    printf("请输入一串字符为：");
    scanf("%s", &string);

    printf("输入的字符为：");
    printf("%s", string);
}
