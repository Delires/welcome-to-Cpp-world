/**
�������Ϊ���Ա----��Ƕ��
1. һ������廯�Ķ�����Ϊ��һ����ĳ�Ա(����),����"�����Ա"
    class A{}
    class B
    {
       A a;
    }
2.��ô�������� д����A����B�أ�
  ������������A����������B�أ�
  ä���ȹ�B��A ������A��B ջ�Ƚ����(X)
  Ӧ�����ȹ���A�ٹ���B,A��B��һ����,�ñ�����,�Ѹ첲�ȹ����˲��ܹ�����!��������ջ�Ƚ����
**/
#include "iostream"
#include "string"
using namespace std;

///�������Ϊ���Ա��"�����Ա"
class Phone
{
public:
    Phone(string name): p_Name(name) //��ʼ���б��Phone����ĳ�Ա(����)��ʼ��
    {
        cout<< "A:Phone(string name)�вι��캯������"<<endl;
    }

    ~Phone()
    {
        cout<< "A:~Phone()������������"<<endl;
    }
public:
    string p_Name;
};

class Person
{
public:                                      //m_PName(phone) �൱�� Phone m_PName = phone;���캯����ʽ����ֵ
    Person(string name, string phone):m_Name(name),m_PName(phone)
    {//��ʼ���б���ʽ����Ա���Ը���ֵ
        cout<< "B:Person(string name, string phone) �вι��캯������"<<endl;
    }
    ~Person()
    {
        cout<< "B:~Person()������������"<<endl;
    }
public:
    string m_Name;
    Phone m_PName; //Phone�����Ķ���p_Name��Person�����ĳ�Ա
} ;

void test01()
{
    Person p1("CPX","XIAOMI");//���ýṹ����Person����Աm_Name m_PName����ֵ
                             //m_PName(phone) Ӧ����Phone m_PName = phone;��ֵ ��ʽ����ֵ

    cout  << p1.m_Name << " ���� "<< p1.m_PName.p_Name<<endl;
                                   //�����Ա��ֵ��ȡһ��Ҫ����ײ�, xx.xx.xx
}

int main(void)
{
    test01();


    cout<< "\r\n\r\n���������ַ���������\r\n"<<endl;
    cin.get();
    return 0;
}
/**
SUMMERIZE:
1.A����廯�Ķ�����B��ĳ�Ա:����"�����Ա"  ������Ƕ��
2.����A��B�ĳ�Ա,���Ա������ڹ���ʱ�ȹ���A����B(���и첲�Ȳ�����)
                                   ��������ջ������ԭ��
3.��B��ĳ�ԱA��ֵʱPerson(Pstring phone):Pm_PName(phone) == Phone Pm_PName = phone
                                                          //�ø�ֵ���������вι������ʽ��ֵ����
**/
