#include "CirPion.h"
/**
1.cpp文件只需定义函数，把类名，类成员都删掉
2.函数名前要加作用域，类名::
**/
void Point::set_X(int x)
{
   p_X = x;
}
int Point::get_X(void)
{
   return p_X;;
}
void Point::set_Y(int y)
{
   p_Y = y;
}
int Point::get_Y(void)
{
   return p_Y;;
}




void Circle::set_Radius(float r)
{
   m_Radius = r;
}
float Circle::get_Radius(void)
{
   return m_Radius;
}

void Circle::set_Center(Point &c) //调用函数时直接把一个点类传递进来
{
   c_Center = c;
}
Point Circle::get_Center(void)
{
   return c_Center;
}


//公共的判断函数，采样引用的方式传递
void IsinCircle(Circle &c, Point &p1)
{
//计算两点距离平方
float temp =
pow( (c.get_Center().get_X() - p1.get_X()), 2) +
pow( (c.get_Center().get_Y() - p1.get_Y()), 2);
//c.get_Center() 返回值是c_Center 一个point类,所以可以引用到get_X();
//计算半径的平方
float temp2 = pow( c.get_Radius(), 2);

if( temp > temp2)
{
    cout<< "点在圆外"<<endl;
}
if( temp == temp2)
{
    cout<< "点在圆上"<<endl;
}
if( temp < temp2)
{
    cout<< "点在圆内"<<endl;
}
}
