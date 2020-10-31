/**
结构体指针: 定义一个指针，指针指向结构体。
定义指针: 结构体名 *指针名      指针和变量类型一致
解引用指针的方法: 指针名->成员名
                  (*指针名).成员名
**/
#include "iostream"
#include "string"
using namespace std;

//结构体 数组的定义都放函数外 这样存储不再栈区，而在堆区。单片机不会卡死
struct student
{
    string name;
    int age;
    int score;
};


int main(void)
{
    student ar = {"bob", 16, 100};  //给结构体元素数组赋值
    student *p = &ar;


    cout<< p->name << "  " <<p->age<< "  "  //通过 -> 解引用
                        <<p->score << "  "<<endl  ;

    cout<< (*p).name << "  " << (*p).age << "  "  //通过 (*指针名).成员名 解引用
                        << (*p).score << "  "<<endl  ;



    cout<< "\r\n请输入字符结束程序\r\n"<<endl;
    cin.get();
    return 0;

}

/**
总结
结构体数组的定义: struct 结构提名 数组名[len]={ {}， {}， {}}；
取值，更改值: 数组名[len].成员=xxx；
**/
