/**
结构体与数组的结合，如果信息量大把结构体放到数组里，这样定义的变量便于维护
结构体定义方式:  struct  结构体名 数组名[元素个数] = {  {} , {} , ... {} };
             注意:struct不能省，但定义结构体变量可以省
                  先struct结构体 再数组arr
                  结构体数组定义必须直接赋值初始化，c/c++不允许先定义再赋值
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
    student arr[3] = {   {"bob", 16, 100},  //给结构体元素数组赋值
                         {"peter", 18, 99},
                         {"mary", 15, 99}

                      };//结构体数组定义必须直接赋值初始化，c/c++不允许先定义再赋值

    arr[1].name = "王明";  //更改结构体数组值
    arr[1].age = 80;
    arr[1].score = 100;

    for(int i=0; i<3; i++)
    {
        cout<< arr[i].name<< "  " <<arr[i].age<< "  "
                        <<arr[i].score<< "  "<<endl  ;
    }


    cout<< "\r\n请输入字符结束程序\r\n"<<endl;
    cin.get();
    return 0;

}

/**
总结
结构体数组的定义:  结构提名 数组名[len]={ {}， {}， {}}；
取值，更改值: 数组名[len].成员=xxx；
结构体数组定义必须直接赋值初始化，c/c++不允许先定义再赋值
**/
