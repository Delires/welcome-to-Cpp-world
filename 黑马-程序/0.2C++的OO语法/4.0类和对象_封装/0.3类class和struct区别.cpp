/**
封装:把行为和属性集合成一个整体,并给予一定的作用域。通过这个封装来表达某一类事物，或将对象实体化
类:一系列对象抽象出的一个整体
类class和struct区别：class和struct真的很像，只是struct不能定义函数
1.在C++中 struct和class唯一的**区别**就在于 **默认的访问权限不同**
                    struct 默认权限为公共
                    class   默认权限为私有
2.struct里也可以定义函数
**/
#include "iostream"
using namespace std;
/**封装三种访问权限 public protected private**/
//public 公共权限       成员类内可以访问,类外可以访问
//protected 保护权限    成员类内可以访问,类外不可以访问
//private   私有权限    成员类内可以访问,类外不可以访问

class  C_Person
{
    int number; //calss默认权限是private

};

struct S_Person
{
    int number; //struct默认权限是public

};

int main(void)
{
    C_Person c1;
    S_Person s1;

    //c1.number = 10; //error: 'int C_Person::number' is private|
           //类内默认权限private 类外不能访问

    s1.number = 10;//struct默认是public


    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}


/**
SUMMERIZE:
1.class 默认权限 private
2.struct 默认权限 public
**/
