/**
封装一个函数，利用冒泡排序，实现对整型数组的升序排序
重复地走访过要排序的元素列，依次比较两个相邻的元素，重点是挨个和他相邻的两个元素比较
如果顺序错误就把他们交换过来。走访元素的工作是重复地进行直到没有相邻元素需要交换，也
就是说该元素列已经排序完成。如果10个元素，则第一个数交换就得比较9次，第二个元素8次......
**/
#include "iostream"
using namespace std;
#define NUMBER 10

void bubble_sort(int *p1, int len); //指针定义数组函数，地址传递
void print_sort(int arr[], int len); //数组定义数组函数，值传递

int main(void)
{
    int arr[NUMBER] = { 4,3,6,9,1,2,10,8,7,5 };

    bubble_sort(arr, NUMBER); //指针定义数组函数，地址传递
    print_sort(arr, NUMBER); //数组定义数组函数，值传递


    cout << "\r\n\r\n\r\n请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}


void bubble_sort(int *p1, int len)
{
//冒泡法精髓是，挨个和相邻两个元素比较   每个数据比较的次数依次减1
    int i, j, temp;
    for(i=0; i<len; i++) //外循环控制数组的哪个数进行比较
    {
        for(j=0; j<len-1-i; j++)//内循环控制比较的次数,次数依次递减
        {
            if( *(p1+j) > *(p1+j+1) )//升序排列
            {
                temp = *(p1+j);
                *(p1+j) = *(p1+j+1);
                *(p1+j+1) =  temp;
            }
        }
    }
} //指针传递会改变数组值



void print_sort(int arr[], int len) //数组定义数组函数，值传递
{
    for(int i=0; i<len;  i++)
    {
        cout<<arr[i]<<"  ";
    }
}


/**
1.冒泡法的精髓是相邻两个元素比较，像泡泡一样冒出来。外for循环控制比较的数字，内for控制比较次数
2.指针(地址)传递会改变实参值
  值传递不会改变实参值
3.不管数指针定义还是值定义函数，数组传过去的都是数组名
**/

