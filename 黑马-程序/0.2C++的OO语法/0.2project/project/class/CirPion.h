/**
ͷ�ļ�ֻ��������Ա�����ͺ���
**/
#pragma once //��ֹ���ض���
#include <iostream>
#include "math.h"
using namespace std;

class Point
{
public:
    void set_X(int x);  //ͷ�ļ�ֻ��������Ա�����ͺ���
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

//����Բ��
    void set_Center(Point &c); //���ú���ʱֱ�Ӱ�һ�����ഫ�ݽ���
    Point get_Center(void);
private://����˽��
    Point c_Center;
    float m_Radius;
};

//�������жϺ������������õķ�ʽ����
void IsinCircle(Circle &c, Point &p1);//ͷ�ļ�ֻ��������Ա�����ͺ���

