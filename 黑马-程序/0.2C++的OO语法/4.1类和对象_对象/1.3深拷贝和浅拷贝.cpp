/**
�����ǳ����  (������������)
1.��ǳ�ǴӶ�����������������ֵ�
2.ǳ�������򵥵ĸ�ֵ��������
  ������ڶ�����������ռ䣬���п�������

��ʱ������������������,�ڶѿ��ٵĿռ�,�����������������������д�ֲ��Ǻܶ�
�ٿ���������ԭ�ⲻ�������ֽڿ��� Person p2(p1);�Ͱ�p1���������ֽڿ�����p2
������p2.m_Age == p1.m_Age  p2.m_High == p1.m_High
������ջ��������ԭ��,�ȴ���p1��p2,������ʱ��������p2��p1
�ܵ�����m_High��һ��ָ��,����p1.m_High��p2.m_High��ָ��һ���ڴ档����p1.m_Age p2.m_Age�и��Ե��ڴ�
��ջ������,����delete�ͷ�p2.m_Highָ�����Ƭ����,Ȼ������delete�ͷ�p1.m_Highָ�����Ƭ����
 ��������ָ��ͬһ����,p2.m_High�Ѿ����Ǹ������ͷ���,p1.m_High��û���ͷţ���˾ͻ�����ظ��ͷŵ�����!!
��ν��?
������������ǳ��������, ����Ҫ�Լ�д�����ṹ���������ǳ��������������
�������������,p1.m_Highָ�����Ķ���   p2.m_Highָ�����Ķ���
��������������ʱ�Ͳ��ᷢ��������
**/

#include "iostream"
using namespace std;
#define MYSELF 0
#if MYSELF
class Person
{
public:
    Person()
    {
        cout << "�޲�/Ĭ�Ϲ��캯������:Person()"<<endl;
    }
    Person(int age, float high)
    {
        m_Age = age;
        m_High = new float(high); //��high�����ֵnew'����һ���ռ�ŵ����� new���һ��ָ��
          //ͬ����ָ�����
        cout << "�вι��캯������:Person(int age)"<<endl;
    }
    Person(const Person &p)
    {
        m_Age = p.m_Age;
        //m_High = p.m_High; ������Ĭ�ϵĲ���,���ͷŶ����������
    ///�������:
        m_High = new float(*p.m_High);
                            //*p.m_High:�Ѵ�����ָ������ó���ֵ,new float(*p.m_High)��Ȼ�������ֵ�����µĶ���ָ��ָ��
        cout << "�������캯������:Person(const Person &p))"<<endl;
    }

    ~Person()
    {
        if(m_High != NULL) //m_Highָ��new���ٵĶѿռ�,����ͷ�ҲҪ�ͷ�m_High
        {
            delete(m_High);
            m_High = NULL;
        }
        cout << "������������:~Person()"<<endl;
    }

public:
    int m_Age;
    float *m_High;

};

void test01()
{
    Person p1(18, 185);
    cout<< "p1��������:"<<p1.m_Age<<"  p1�������:"<<*p1.m_High<<endl;

    Person p2(p1); //ûд�������캯��,ϵͳ���Զ�������дһ��
    cout<< "p2��������:"<<p2.m_Age<<"  p2�������:"<<*p2.m_High<<endl;

    ///new���ٶ����� Ҫdelete(ָ��) point=NULL ����ִ����Ҫ����,���ͷŶ���д������������
}


int main(void)
{
    test01();


    cout<<"\r\n\r\n���������ַ���������\r\n"<<endl;
    cin.get();
    return 0;
}
#else

class Car
{
public:
    Car()
    {
         cout << "�޲�/Ĭ�Ϲ��캯������:Car())"<<endl;
    }
    Car( float lon, float pri)
    {
        c_Long = lon;
        c_price = new float(pri);//�Ѵ�����pri���ڶ���
        //c_price = &pri; //�Ѵ���������ͨ��ָ�봫����ջ��
        cout << "�вι��캯������:Car(float lon, float pri)"<<endl;
    }
    Car(const Car &p)//�������캯��
    {
        c_Long = p.c_Long;
        //c_price = p.c_price; //����ָ��ֱ�Ӵ��ݵġ�ǳ����������delet����ʱ����
        c_price = new float(*p.c_price);//�Ѷ�����ֵȡ���ٿ���һ���������,delete�������
        cout << "�������캯������:Car(const Car &p)"<<endl;
    }


    ~Car()//��������û�в���ֵ
    {
        if(c_price != NULL)
        {
            delete(c_price); //�ѿ��ٵĶ����١���������������������,����������ֶ��ظ��ͷŵ�����
            c_price = NULL;
        }
        cout << "������������:~Person()"<<endl;
    }


public:
    float c_Long;
    float *c_price;


};

int main(void)
{//���ŷ���ֵ
    Car c1(210, 28000);
    Car c2(c1); //����
    cout<< "c1��longΪ"<< c1.c_Long <<
    "  c1��price�ĵ�ַΪ" <<c1.c_price<<"  c1��price��Ϊ" <<*c1.c_price<<endl;
    cout<< "c2��longΪ"<< c2.c_Long <<
    "  c2��price�ĵ�ַΪ" <<c2.c_price<<"  c2��price��Ϊ" <<*c2.c_price<<endl;

    cout<< "\r\n���Կ���c1.c_price��c2.c_price�ĵ�ַ��ͬ,��Ϊ�����.new���ٶ���ָ�������и�ֵ�ķ�ʽ"<<endl;
    cout<< "����ջ������,������c2��c1,����ߵ�price�ѵ�ַ��ͬ,��˲�����ֶ��ظ��ͷŵ�����"<<endl;

    cout<< "\r\n\r\n���������ַ�����\r\n"<<endl;
    cin.get();
    return 0;
}

#endif
/**
SUMMERIZE:
ǳ����:�������Զ����õĿ�������/����д�� ���ּ򵥵Ľ��и�ֵ�Ŀ���
���:�����ڿ���������,new���ٶ���ָ�������и�ֵ�ķ�ʽ.�ǵ�������������delete��
ע��:����������ڶѿ���,һ��Ҫ�Լ��ṩ������������ֹǳ������������
**/

