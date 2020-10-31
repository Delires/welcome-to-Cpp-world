/**
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数。 创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。
用到:结构体，结构体数组，
**/

#include "iostream"
#include "string"
using namespace std;
#define number 3

//结构体 数组的定义都放函数外 这样存储不再栈区，而在堆区。单片机不会卡死
struct student
{
    string name;
    int score;
};
struct teacher
{
    string name;
    student S_arr[5];
};

//将形参改为指针能节省很多内存
//但指针会改变实参值，为了防止误操作。形参指针定义前加一个const
void printf_struct(const teacher *p, int len) //值传递不会改变实参值  地址传递会改变实参值
{                             //使用地址传递能节省内存，因为地址传递只给地址，一个指针只占4byte，而值传递又重新开辟内存复制了一遍数据
    int i, j;
    for(i=0; i<len; i++)
    {
        cout<<"第"<<i<<"个老师的姓名:"<<(p+i)->name <<endl;
        for(j=0; j<5; j++)
        {
            cout<<"第"<<i<<"个老师的第"<<j<<"个学生姓名:"<<(p+i)->S_arr[j].name <<endl;
            cout<<"第"<<i<<"个老师的第"<<j<<"个学生分数:"<<(p+i)->S_arr[j].score <<endl;
        }


    }



}

int main(void)
{
    int i, j;
    teacher T_arr[number];
    for(i=0; i<number; i++)
    {
        cout<< "请输入第"<<i<<"个老师的信息"<<endl;
        cout<<"老师姓名:";
        cin >> T_arr[i].name;
        cout<<"请输入"<< T_arr[i].name << "老师所带学生的信息";
        for(j=0; j<5; j++)
        {
            cout<< "请输入第"<<j<<"个学生的姓名";
            cin >> T_arr[i].S_arr[j].name;
            cout<< "请输入第"<<j<<"个学生的分数";
            cin >> T_arr[i].S_arr[j].score;
            cout<<"\r\n"<<endl;
        }
        cout<<"\r\n \r\n"<<endl;
    }

    printf_struct(T_arr, number);








    cout<< "\r\n请输入字符结束程序\r\n"<<endl;
    cin.get();
    return 0;

}

/**
总结
用const来防止误操作：
 1.定义函数形参指针，防止函数对实参误操作。 因为改变const定义的值会报错。
**/
