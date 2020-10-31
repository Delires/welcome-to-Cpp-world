/**
头文件只需声明成员函数和函数
**/
#pragma once //防止多重定义
#include <iostream>
#include "math.h"
using namespace std;

class Point
{
public:
    void set_X(int x);  //头文件只需声明成员函数和函数
    int get_X(void);

    void set_Y(int y);
    int get_Y(void);

private:
    int p_X;
    int p_Y;
};

class Circle
{
public:
    void set_Radius(float r);
    float get_Radius(void);

//设置圆心
    void set_Center(Point &c); //调用函数时直接把一个点类传递进来
    Point get_Center(void);
private://属性私有
    Point c_Center;
    float m_Radius;
};

//公共的判断函数，采样引用的方式传递
void IsinCircle(Circle &c, Point &p1);//头文件只需声明成员函数和函数

