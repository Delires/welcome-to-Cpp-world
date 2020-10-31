/**
const 限定的变量，只读不能进行修改
作用:防止对结构体值得误操作
例如：函数的定义，地址传递的形参用const定义。这样原本地址传递可以改变实参，现在就不能改变了。
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

//将形参改为指针能节省很多内存
//但指针会改变实参值，为了防止误操作。形参指针定义前加一个const
void printf_struct(const student *s) //值传递不会改变实参值  地址传递会改变实参值
{                             //使用地址传递能节省内存，因为地址传递只给地址，一个指针只占4byte，而值传递又重新开辟内存复制了一遍数据
    //s->name = "Diao";
    cout<< s->name << "  " << s->age << "  "  << s->score << "  "  <<endl  ;
}

int main(void)
{
    student stu = { "Dan", 16, 100};

    printf_struct( &stu);








    cout<< "\r\n请输入字符结束程序\r\n"<<endl;
    cin.get();
    return 0;

}

/**
总结
用const来防止误操作：
 1.定义函数形参指针，防止函数对实参误操作。 因为改变const定义的值会报错。
**/
