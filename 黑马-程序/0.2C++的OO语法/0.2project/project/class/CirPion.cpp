#include "CirPion.h"
/**
1.cpp�ļ�ֻ�趨�庯���������������Ա��ɾ��
2.������ǰҪ������������::
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

void Circle::set_Center(Point &c) //���ú���ʱֱ�Ӱ�һ�����ഫ�ݽ���
{
   c_Center = c;
}
Point Circle::get_Center(void)
{
   return c_Center;
}


//�������жϺ������������õķ�ʽ����
void IsinCircle(Circle &c, Point &p1)
{
//�����������ƽ��
float temp =
pow( (c.get_Center().get_X() - p1.get_X()), 2) +
pow( (c.get_Center().get_Y() - p1.get_Y()), 2);
//c.get_Center() ����ֵ��c_Center һ��point��,���Կ������õ�get_X();
//����뾶��ƽ��
float temp2 = pow( c.get_Radius(), 2);

if( temp > temp2)
{
    cout<< "����Բ��"<<endl;
}
if( temp == temp2)
{
    cout<< "����Բ��"<<endl;
}
if( temp < temp2)
{
    cout<< "����Բ��"<<endl;
}
}
