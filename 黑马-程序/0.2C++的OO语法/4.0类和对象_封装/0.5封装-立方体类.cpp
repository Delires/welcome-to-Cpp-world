/**
**��ϰ����1�������������**
�����������(Cube)
������������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�

**/
#include "iostream"
using namespace std;

class cube
{
public://��Ա����/��Ϊ
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

/** �ó�Ա�����ж������������Ƿ���� **/
    bool Judgement_equal( cube &a) //Ӧ��ֻ������һ��ֵ�����Ƚϵ��Ǹ�ֵ�������������Ա��� ��˲��ô���
    {
        if( a.get_High() == m_W  && a.get_Long() == m_L && a.get_Width() == m_H)
        {                  //�����ֱֵ�ӵ��ó�Ա���Լ���
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
private://��Ա���� ���Զ�������Ϊ˽��
    float m_W;
    float m_L;
    float m_H;
};


/**��ȫ�ֺ����ж������������Ƿ���ȡ�**/
bool Judgement_equal( cube &a, cube &b) //�����õķ�ʽ���� ��ֵ���ݿ�����һ�� �����ʲ�ͬ
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
bool Judgement_equal( cube *a, cube *b, int c) //�����õķ�ʽ���� ��ֵ���ݿ�����һ�� �����ʲ�ͬ
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
    cube c1; //������廯һ������
    c1.set_Width(2);
    c1.set_Long(2);
    c1.set_High(2);

    cube c2; //������廯һ������
    c2.set_Width(2);
    c2.set_Long(2);
    c2.set_High(2);


    cout<< c1.get_Width() <<endl;
    cout<< c1.calculate_Area() <<endl;
    cout<< c1.calculate_Volume()<<endl;

    cout<<"\r\nȫ�ֺ����ж������������Ƿ����"<<endl;
    cout<< Judgement_equal( &c1, &c2, 5)<<endl;

    cout<<"\r\n��Ա�����ж������������Ƿ����"<<endl;
    cout<< c1.Judgement_equal(c2) <<endl;

    cout<< "\r\n\r\n���������ַ���������\r\n" <<endl;
    cin.get();
    return 0;
}

/**
SUMMERIZE:
1.ȫ�ֺ��� �� ��Ա���� �ж�ʱ����ı�������Ϊ����?
  ��Ա���� �ж�ʱ�����ֵ����Ҫ����,���ֻ����1��
2.c++�к������ô��� �� ֵ���ݱ���������û�����𡣵������ǵ�ַ����(�������½������洢���ݵ�ֵ)(���ô��� == ָ�볣��)
  �������ַ����ҲҪ��
3.class�wָ��������ͽṹ��һ�� ��->
**/
