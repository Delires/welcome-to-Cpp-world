/**
**��ϰ����2�����Բ�Ĺ�ϵ**
���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
1.�������:����Բ�� Բ�� Բ��
2.����ж�?�жϵ��Բ�ĵľ��� �Ͱ뾶�Ƚϡ�
3.���Բ�ĵľ��룿 ��((x1-x2)^2+(y1-y2)^2)
**/
/**
�ٷ���Բ��Ƕ�׵��ࡣԲ���������õ�����˵��
class Circle
{
public:
    set_C(Ponit p)
    {
        P1 = p; //����ֵʱֱ�Ӵ���һ������
    }
private:
    Ponit P1;  //����ֵʱֱ�Ӵ���һ������
    int m_R;
};
**/

/**
c++��ֲ�ͬ�⺯��д�ķ���:
1. .h�ļ���
   ��#pragma once ��Ϊ��ֹ�ظ�����д�ڿ�ͷ   ����#ifndef__x_h__ #define #endif
   ����Ķ���ȫ��д��.h�ļ��У����ѳ�Ա�����Ķ���ȫ��ɾ��,ֻ����������
2. .cpp�ļ���
   �ٲ���д��,ֱ�Ӱ����еĺ������������д�������塣
   ��д��������ʱ,Ҫ�ں���ǰ������������: ����::������()     ����������ֹ��������
   �۱�����#includeͷ�ļ�Ŷ
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
        m_Center[1] = *value; //����*��++����������ȼ���ͬ�����ҽ��������������
                       //���*p++��ʵ���ǣ�*(p++)�����ڴ˴���++�Ǻ�̼ӣ������ȵõ�*pΪ100֮�󣬲Żᴦ��++�Ķ���
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
            return 0; //Բ��
        }
        else if( temp == m_Radius)
        {
            return 1; //Բ��
        }
        else if( temp < m_Radius)
        {
            return 2; //Բ��
        }
    }



private://����˽��
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
        cout<< "����Բ��"<<endl;
    }
    else if(c1.is_Rleation( P_xval) == 1)
    {
        cout<< "����Բ��"<<endl;
    }
    else if(c1.is_Rleation( P_xval) == 2)
    {
        cout<< "����Բ��"<<endl;
    }


    p1.set_Poin_ax(P_xval);
    P_xval2 = p1.get_Poin_ax();




    cout<< "\r\n\r\n���������ַ���������\r\n"<<endl;
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




    cout<< "\r\n\r\n���������ַ���������\r\n"<<endl;
    cin.get();
    return 0;
}
#endif // MYSELF
//Բ��


/**
�ܽ�:
1.��Ƕ���࣬����ֵʱֱ�Ӵӹ����ĳ�Ա��������һ����ֵ
            ��ȡֵʱ��ṹ��һ���������
2.^2����c���Ե�ƽ���� Ӧ����pow(number, ƽ������);
3.ָ����ƶ� *(p++)����  Ӧ����*(++p)����ǰ*(p++)    ԭ��������

**/

