/**
**练习案例1：设计立方体类**
设计立方体类(Cube)
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等。

**/
#include "iostream"
using namespace std;

class cube
{
public://成员函数/行为
    void set_Width(float Width)
    {
        m_W = Width;
    }
    void set_Long(float Long)
    {
        m_L = Long;
    }
    void set_High(float High)
    {
        m_H = High;
    }

    float get_Width()
    {
       return m_W;
    }
    float get_Long()
    {
       return m_L;
    }
    float get_High()
    {
       return m_H;
    }

/** 用成员函数判断两个立方体是否相等 **/
    bool Judgement_equal( cube &a) //应该只传进来一个值，被比较的那个值本身就是这个类成员里的 因此不用传递
    {
        if( a.get_High() == m_W  && a.get_Long() == m_L && a.get_Width() == m_H)
        {                  //自身的值直接调用成员属性即可
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    float calculate_Area()
    {
        return (((m_W*m_L)+(m_W*m_H)+(m_L*m_H))*2);
    }
    float calculate_Volume()
    {
        return (m_W*m_L*m_H);
    }
private://成员属性 属性都尽量设为私有
    float m_W;
    float m_L;
    float m_H;
};


/**用全局函数判断两个立方体是否相等。**/
bool Judgement_equal( cube &a, cube &b) //用引用的方式传递 和值传递看起来一样 但本质不同
{
    if( a.get_High() == b.get_High()  && a.get_Long() == b.get_Long() && a.get_Width() == b.get_Width())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Judgement_equal( cube *a, cube *b, int c) //用引用的方式传递 和值传递看起来一样 但本质不同
{
    if( a->get_High() == b->get_High()  && a->get_Long() == b->get_Long() && a->get_Width() == b->get_Width())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    cube c1; //用类具体化一个对象
    c1.set_Width(2);
    c1.set_Long(2);
    c1.set_High(2);

    cube c2; //用类具体化一个对象
    c2.set_Width(2);
    c2.set_Long(2);
    c2.set_High(2);


    cout<< c1.get_Width() <<endl;
    cout<< c1.calculate_Area() <<endl;
    cout<< c1.calculate_Volume()<<endl;

    cout<<"\r\n全局函数判断两个立方体是否相等"<<endl;
    cout<< Judgement_equal( &c1, &c2, 5)<<endl;

    cout<<"\r\n成员函数判断两个立方体是否相等"<<endl;
    cout<< c1.Judgement_equal(c2) <<endl;

    cout<< "\r\n\r\n输入任意字符结束程序\r\n" <<endl;
    cin.get();
    return 0;
}

/**
SUMMERIZE:
1.全局函数 和 成员函数 判断时传入的变量个数为多少?
  成员函数 判断时自身的值不需要传入,因此只传入1个
2.c++中函数引用传递 与 值传递表明看起来没有区别。但本质是地址传递(即不用新建变量存储传递的值)(引用传递 == 指针常量)
  但建议地址传递也要练
3.class剋指针的索引和结构体一样 用->
**/
