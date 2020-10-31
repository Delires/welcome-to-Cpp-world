/**
结构体嵌套结构体:在一个结构体中嵌套出另外一个结构体。比如老师的信息中就有他带的学生的信息
写法:结构体
     {
       结构体;
     }
赋值的时候要索引到子结构体的对象进行赋值
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


struct teacher
{
    int id;
    string name;
    student stu;
};



int main(void)
{
    teacher tea;
    tea.id = 4327;
    tea.name = "Bob";

    tea.stu.name = "Dan"; //必须索引到子结构体的对象然后进行复制
    tea.stu.age = 16;
    tea.stu.score = 100;



    cout<< tea.id << "  " << tea.name << "  "
        << tea.stu.name << "  " << tea.stu.age << "  "
        << tea.stu.score << "  " <<endl  ;





    cout<< "\r\n请输入字符结束程序\r\n"<<endl;
    cin.get();
    return 0;

}

/**
总结

**/
