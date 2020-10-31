/**
设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
五名英雄信息如下：
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
**/

#include "iostream"
#include "string"
using namespace std;
#define number 5

//结构体 数组的定义都放函数外 这样存储不再栈区，而在堆区。单片机不会卡死
struct Hero
{
    string name;
    int age;
    string sex;
};

//将形参改为指针能节省很多内存
//但指针会改变实参值，为了防止误操作。形参指针定义前加一个const
void printf_struct(const Hero *p, int len) //值传递不会改变实参值  地址传递会改变实参值
{                             //使用地址传递能节省内存，因为地址传递只给地址，一个指针只占4byte，而值传递又重新开辟内存复制了一遍数据
    int i, j;
    for(i=0; i<len; i++)
    {
        cout<< (p+i)->name << " "<< (p+i)->age<< " " << (p+i)->sex<< " " <<endl;//(p+i)指针自
        //cout<< "\r\n" <<endl;
    }




}

/**
数组的实质是一段连续分配的指针，如果你定义了 int a[2]那么变量 a 就是指向开头的指针，a+1 即下一个，
依此类推取元素值的操作 a[n] 实际上就是 *(a+n).之因为是一段连续的地址，所以数组元素之间的地址不能交换，会出错。只能交换值
**/
void bubble_point(Hero *p, int len)
{
    int i,j;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-1-i; j++)
        {
            if( ((p +j)->age) > ((p +j+1)->age) )
               {
                   Hero temp[1]; //Hero temp 出现卡死的情况 肯定是指针类型不匹配
                            //数据类型是结构体数组，因此定义中间变量temp为 Hero temp[1];

                   *temp = *(p +j); //数组是一段连续的地址，只能值传递*(指针)或a[] 不能地址传递
                   *(p +j) = *(p +j+1);
                   *(p +j+1) = *temp;

               }
        }
    }
}



void bubble(Hero arr[], int len) //数组的传递的三种方法从来都是指针，从来都是地址传递，而不是值传递，所以函数操作会改变实参。
{
    int i,j;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-1-i; j++)
        {
            if ( arr[j].age  > arr[j+1].age )
               {
                   Hero temp;

                   temp = arr[j];
                   arr[j] =  arr[j+1];
                   arr[j+1] = temp;
               }
        }
    }
   // printf_struct(arr, len);
}




int main(void)
{
    Hero SanGuo[number]={
                            {"刘备",23,"男"},
                            {"关羽",22,"男"},
                            {"张飞",20,"男"},
                            {"赵云",21,"男"},
                            {"貂蝉",19,"女"}
                       };

   //bubble(SanGuo, number);
    cout<< "按年龄排序前:"<<endl;;
    printf_struct(SanGuo, number);


    cout<< "\r\n按年龄排序后:"<<endl;
    //bubble(SanGuo, number);
    bubble_point(SanGuo, number);
    printf_struct(SanGuo, number);


    cout<< "\r\n请输入字符结束程序\r\n"<<endl;
    cin.get();
    return 0;

}

/**
总结:
1.数组的实质是一段连续的地址。int a[5] a是首地址，a++是第二个元素的地址，依次类推。
  之因为数组是一段连续的地址，所以地址之间不能交换。交换了就不是数组，就错了。
  所以，只能*(指针) a[]这种取值来进行交换，而不是地址来交换!!!

2.c函数传递数组这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。
  数组的传递从来都是指针，从来都是地址传递，而不是值传递，所以函数操作会改变实参。
3.Hero temp[1]; 出现卡死的情况 肯定是指针类型不匹配
   数据类型是结构体数组，因此定义中间变量temp为 Hero temp[1];

**/
