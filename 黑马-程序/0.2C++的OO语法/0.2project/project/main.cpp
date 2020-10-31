/**
**练习案例2：点和圆的关系**
设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
1.三种情况:点在圆外 圆上 圆内
2.如何判断?判断点和圆心的距离 和半径比较。
3.点和圆心的距离？ √((x1-x2)^2+(y1-y2)^2)
**/
/**
官方用圆类嵌套点类。圆类的坐标就用点类来说明
class Circle
{
public:
    set_C(Ponit p)
    {
        P1 = p; //设置值时直接传递一个点类
    }
private:
    Ponit P1;  //设置值时直接传递一个点类
    int m_R;
};
**/

/**
c++类分不同库函数写的方法:
1. .h文件中
   ①#pragma once 作为防止重复定义写在开头   代替#ifndef__x_h__ #define #endif
   ②类的定义全部写在.h文件中，但把成员函数的定义全部删除,只留函数声明
2. .cpp文件中
   ①不用写类,直接把类中的函数单独拎出来写函数定义。
   ②写函数定义时,要在函数前加上类名。如: 类名::函数名()     加上类名防止函数重名
   ③别忘了#include头文件哦
**/

#include "iostream"
#include "CirPion.h"
using namespace std;
#define MYSELF 0
#if MYSELF
class Circle
{
public:
    void set_Center(int *value)
    {
        m_Center[0] = *value++;
        m_Center[1] = *value; //由于*和++的运算符优先级相同，而且结合性是由右至左，
                       //因此*p++其实就是：*(p++)。由于此处的++是后继加，所以先得到*p为100之后，才会处理++的动作
    }
    int* get_Center(void)
    {
       return m_Center;
    }

    void set_Radius(float r)
    {
       m_Radius = r;
    }
    float get_Radius(void)
    {
       return m_Radius;
    }

    char is_Rleation(int* p_value)
    {
        float temp = pow( ((*p_value)-m_Center[0]), 2) + pow(( (*++p_value)-m_Center[1]), 2);
        temp = sqrt(temp);
        if(temp > m_Radius)
        {
            return 0; //圆外
        }
        else if( temp == m_Radius)
        {
            return 1; //圆上
        }
        else if( temp < m_Radius)
        {
            return 2; //圆内
        }
    }



private://属性私有
    int m_Center[2];
    float m_Radius;
};

class Point
{
public:
    void set_Poin_ax(int *value)
    {
        axis[0] = *value;
        axis[1] = *++value;
    }
    int* get_Poin_ax(void)
    {
        return axis;
    }

private:
    int axis[2];
};


int main(void)
{
    Circle c1;
    Point  p1;
    int C_val[2]={0,0};
    int *C_val2;
    int P_xval[2]={1,1};
    int *P_xval2;

    c1.set_Center(C_val);
    c1.set_Radius(2);

    if(c1.is_Rleation( P_xval) == 0)
    {
        cout<< "点在圆外"<<endl;
    }
    else if(c1.is_Rleation( P_xval) == 1)
    {
        cout<< "点在圆上"<<endl;
    }
    else if(c1.is_Rleation( P_xval) == 2)
    {
        cout<< "点在圆内"<<endl;
    }


    p1.set_Poin_ax(P_xval);
    P_xval2 = p1.get_Poin_ax();




    cout<< "\r\n\r\n输入任意字符结束函数\r\n"<<endl;
    cin.get();
    return 0;
}
#else


int main(void)
{
    Circle c1;
    Point  c1_center;
    Point  p1;

    c1_center.set_X(0);
    c1_center.set_Y(0);
    c1.set_Center(c1_center);
    c1.set_Radius(10);

    p1.set_X(9);
    p1.set_Y(0);


    IsinCircle(c1, p1);




    cout<< "\r\n\r\n输入任意字符结束函数\r\n"<<endl;
    cin.get();
    return 0;
}
#endif // MYSELF
//圆类


/**
总结:
1.类嵌套类，设置值时直接从公共的成员函数传递一个类值
            获取值时像结构体一样层层索引
2.^2不是c语言的平方， 应该是pow(number, 平方次数);
3.指针后移动 *(p++)错误  应该是*(++p)或提前*(p++)    原因上面有

**/

