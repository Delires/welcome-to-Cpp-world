/**
��װ:����Ϊ�����Լ��ϳ�һ������,������һ����������ͨ�������װ�����ĳһ������򽫶���ʵ�廯
��:һϵ�ж���������һ������
��class��struct����class��struct��ĺ���ֻ��struct���ܶ��庯��
1.��C++�� struct��classΨһ��**����**������ **Ĭ�ϵķ���Ȩ�޲�ͬ**
                    struct Ĭ��Ȩ��Ϊ����
                    class   Ĭ��Ȩ��Ϊ˽��
2.struct��Ҳ���Զ��庯��
**/
#include "iostream"
using namespace std;
/**��װ���ַ���Ȩ�� public protected private**/
//public ����Ȩ��       ��Ա���ڿ��Է���,������Է���
//protected ����Ȩ��    ��Ա���ڿ��Է���,���ⲻ���Է���
//private   ˽��Ȩ��    ��Ա���ڿ��Է���,���ⲻ���Է���

class  C_Person
{
    int number; //calssĬ��Ȩ����private

};

struct S_Person
{
    int number; //structĬ��Ȩ����public

};

int main(void)
{
    C_Person c1;
    S_Person s1;

    //c1.number = 10; //error: 'int C_Person::number' is private|
           //����Ĭ��Ȩ��private ���ⲻ�ܷ���

    s1.number = 10;//structĬ����public


    cout<< "\r\n\r\n�������ַ���������������\r\n"<< endl;
    cin.get();
    return 0;
}


/**
SUMMERIZE:
1.class Ĭ��Ȩ�� private
2.struct Ĭ��Ȩ�� public
**/
