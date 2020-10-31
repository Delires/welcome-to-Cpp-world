/**
同样的用c与c++分别编写程序求和2------C篇
要求：编写一个程序，要求用户输入一书整数和任意数目的空格，这些整数必须位于同一行中，
      但允许出现在该行中的任何位置。当用户按下键盘上的“Enter”键时，数据输入结束。程序自动
      对所有的整数进行求和并打印出结果。
**/

#include "stdio.h"
#include "stdlib.h"

#define JIAYU 0
#if(JIAYU)
scanf只能接收数字，接收特殊符号用getchar
int main(void)
{

    int i=0;
    int sum=0;
    char ch;

    printf("输入任意的数字：")
    while( scanf("%d", &i) == 1 )
    {
        sum += i;

        while( (ch = getchar()) == ' ');  //符号的输入要用getchar   scanf输入的是数据
                                //只要键盘输入就都存到输入流stdin里，getchar的本质是把输入流里的字符提取出来
        if( ch == '\n')
        {
            break;
        }

        ungetc(ch, stdin);  //把接收到的字符ch退回到输入流stdin中， 输入流可以看作一个链表专门存放键盘的输入
                 //如果不退回，那么scanf接收的数据就会出错
                 //为什么退回到输入流才不会错，

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
       if( (ch = getchar()) =='\n')  //scanf只能接收数字，接收特殊符号用getchar
       {
           break;
       }
       if( ch== ' ') //一定要把‘ ’消耗掉 不然会出错   接收特殊符号用getchar
       {

       }
   }

   j = i;
   printf("输入数的个数 = %d ", j);

   for(i=0; i<=j; i++)
   {
       sum +=  data[i];
   }


    printf("%d ", sum);
}

#endif






