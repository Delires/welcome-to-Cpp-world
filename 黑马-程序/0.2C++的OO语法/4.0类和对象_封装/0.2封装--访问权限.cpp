/**
��װ:����Ϊ�����Լ��ϳ�һ������,������һ����������ͨ�������װ����ĳһ������򽫶���ʵ�廯
��װ---����Ȩ��(������)
1.��������ʱ������Ϊ�����Է��ڲ�ͬ��Ȩ���£����Կ��ơ�
2.Ȩ��������: public    ����Ȩ��  ��Ա���ڿ��Է��� ������Է���
              protected ����Ȩ��  ��Ա���ڿ��Է��� ���ⲻ���Է���
              private   ˽��Ȩ��  ��Ա���ڿ��Է��� ���ⲻ���Է���
  ��ѧϰ�̳�(��Ϊ����͸���)ʱprotected��private��������������̳и���ʱprotected���Է��ʣ�
  ����̳и���ʱprivate�����Է���(protected�ĳ�Ա����ֵĳ�����Լ̳У�private�ĳ�Ա����ֵ������㲻���Լ̳�)
3.������Ժ���Ϊͳһ������Ա

**/
#include "iostream"
using namespace std;
/**��װ���ַ���Ȩ�� public protected private**/
//public ����Ȩ��       ��Ա���ڿ��Է���,������Է���
//protected ����Ȩ��    ��Ա���ڿ��Է���,���ⲻ���Է���
//private   ˽��Ȩ��    ��Ա���ڿ��Է���,���ⲻ���Է���

class Person
{
public:
  //����Ȩ������
    string m_Name;
protected:
  //����Ȩ������
    string m_Car;
private:
  //˽��Ȩ������
    int m_Card;

public:
    void set_message()
    {
        m_Name = "bOB";
        m_Car = "���";  //������ protected �� private ���Է���
        m_Card = 9527;

        cout<< m_Name<<endl;
        cout<< m_Car<<endl;
        cout<< m_Card<<endl;
    }


};


int main(void)
{
    Person p1;
    p1.m_Name = "Peter";
    //p1.m_Car = "����"; //error: string Person::m_Car' is protected|
    //p1.m_Card = 4386; //error::string Person::m_Card' is private|
                    //������ protected �� private �����Է���
    p1.set_message();
    cout<< "\r\n\r\n�������ַ���������������\r\n"<< endl;
    cin.get();
    return 0;
}


/**
SUMMERIZE:
1.��װ������Ȩ�� public protected private
2.�������ֻ���P,��Ӱ��
3.����protected private����
4.�̳�protected��  private����
**/
