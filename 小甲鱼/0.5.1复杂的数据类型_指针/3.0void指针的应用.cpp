/**
void * ָ��ƥ���κγ����� ����ֱ�Ӱѱ�ı����ĵ�ַ��ֵ��ȥ
����void*ָ����Ϊ��������ʵ��ʱ����Ҫǿ��ת���ͺ����β�һ��
�� siz( (int*)p , avr);

�� ANSI C ��ʹ���������桰char*����Ϊͨ��ָ������͡�������char��ͨ�õ�
���� void ָ��û���ض������ͣ����������ָ���κ����͵����ݡ�Ҳ����˵���κ����͵�ָ�붼����ֱ�Ӹ�ֵ�� void ָ��
��Ҫ�� void ָ�븳ֵ���������͵�ָ�룬�������ǿ������ת���������������ˣ����˲�������
���� void ָ�룬����������֪����ָ����Ĵ�С�����Զ� void ָ����������������ǲ��Ϸ��ģ�void *p; p++���������
��ָ�벻����Ϊ������������������ǿ��ת��Ϊ�о������͵�ָ��

**/
#include "iostream"
#include "string"
#define VOIDPOINT    0
using namespace std;

#if (VOIDPOINT)
int siz(int *l, int number);

int main(void)
{
    int avr = 100000;
    char ch = 'l';

    void *p, *q;

     p = &avr;
     q = &ch;

    cout<< "avr�ĵ�ַ��:"<< p <<endl;
    cout<< "avr��ֵ��:"<< avr <<endl;
    cout<< "\n\n"<<endl;

    cout<< "ch�ĵ�ַ��:"<< q <<endl;
    cout<< "ch��ֵ��:"<< ch <<endl;
    cout<< "\n\n"<<endl;

    siz( (int*)p , avr); //void*ָ����Ϊ��������ʵ��ʱ����Ҫǿ��ת���ͺ����β�һ��

    //cout<< "ch�ĵ�ַ��:"<< x <<endl;
    //cout<< "ch��ֵ��:"<< ch <<endl;

    return 0;

}

int siz(int *l, int number)
{
    cout<< "void��ָ����Ϊʵ�δ��� Ҫǿ��ת�����βα���һ��"<<endl;
    cout << l << endl;
    cout << number << endl;

    return 0;
}



#else   //voidָ��������ǲ������


int main(void)
{

   string ch= "mengdi shi ge gou";

    void *p;
    string *q;

     p = &ch;
     q = &ch;



    cout<< "ch�ĵ�ַ��:"<< *q <<endl;

    p++; //warning: ISO C++ forbids incrementing a pointer of type 'void*' [-Wpointer-arith]|
         //��ֹһ��void*���͵�ָ������������
    cout<< "ch��ֵ��:"<< ch <<endl;

    cout<< "ch�Ŀ�ָ��p����:"<< *(char*)p <<endl;
                                //error: 'void*' is not a pointer-to-object type|
                                //��ָ�벻����Ϊ������������������ǿ��ת��Ϊ�о������͵�ָ��
    cout<< "\n\n"<<endl;


    return 0;

}

#endif
