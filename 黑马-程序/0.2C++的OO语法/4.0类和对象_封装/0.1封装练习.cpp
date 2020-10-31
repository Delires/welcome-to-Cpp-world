/**
1.C++的基本概念:
①对象:万事万物都是一个对象。具体的一个实物                      鼠标，键盘
②类:含有相同属性的对象,抽象出的一种分类。某些事物的共性         鼠标，键盘都是电子用品类。
③行为:这个对象做的事情。一般是函数。                            鼠标点击,键盘输入
④属性:这个对象的固有特征。                                      鼠标有左右键,键盘有键盘灯。

2.C++三大特性:封装 继承 多态
①封装:将属性和行为集合成一个整体，并给予封装的作用域。然后来表达某一类事物。这个封装类可以用来定义个例的对象
②继承
③多态

3.赋值的两种方法:
1.赋值的第一种方法:直接给属性赋值              st2.number =000002;
2.赋值的第二种方法:通过类的行为对类的属性赋值  st1.DataIntput();
**/

/**
**示例1：设计一个圆类算圆的周长
**示例2：设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
**/

#include "iostream"
#include "string"
using namespace std;
#define PI 3.1415926

//封装一个圆类计算周长
//属性是半径(半径是圆的独有属性)   行为是计算周长
class CCircle
{//类中的属性和行为统一叫做成员。 属性也叫"成员属性"和"成员变量"  行为也叫"成员函数"和"成员方法"
public: //作用域全局
    double radius; //属性
    double calculate_peri()
    {
        return (2*PI*radius);
    }

};

//f=封装一个学生类
//属性是姓名学号
//行为是 输入学生姓名学号  显示学生姓名学号
class student
{//类中的属性和行为统一叫做成员。 属性也叫"成员属性"和"成员变量"  行为也叫"成员函数"和"成员方法"
public: //作用域全局
   string name;//属性 姓名学号
   int number;

//赋值的第二种方法:通过类的行为对类的属性赋值
   void DataIntput() //输入学生姓名学号行为
   {
       cout<< "请输入姓名:";
       cin>> name;
       cout<< "请输入学号:";
       cin>> number;
   }

   void DataOutput() //输入学生姓名学号行为
   {
       cout<< "姓名为:" << name<< endl;
       cout<< "学号为:" << number<< endl;
   }

};


int main(void)
{
    CCircle cl; //用类定义一个具体对象
    cl.radius = 16.2;
    cout<< "圆的周长为:"<< cl.calculate_peri() << endl;

    student st1;//用学生类定义一个具体对象,实例化对象
    st1.DataIntput();//调用学生类的数据输入行为
    st1.DataOutput();//调用学生类的数据输出行为

    student st2;//再创建一个学生
    st2.name = "aaaaa02";//赋值的第一种方法:直接给属性赋值
    st2.number =000002;
    //st1.DataIntput();//赋值的第二种方法:通过类的行为对类的属性赋值
    st2.DataOutput();


    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}

/**
SUMMERIZE:
1.属性的赋值有两个方法: ①直接给属性赋值cl.name=; ②通过行为给属性赋值cl.setname();
2.属性和行为统一叫做成员
            属性 别名 "成员属性" "成员变量"
            行为 别名 "成员函数" "成员方法"
**/
