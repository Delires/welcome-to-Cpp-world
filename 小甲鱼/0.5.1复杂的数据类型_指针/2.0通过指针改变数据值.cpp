/**
ָ��������ŵ��Ǳ����ĵ�ַ
ָ���������ָ�� ������Ұָ��
ָ��ָ����������ĵ�ַ�ˣ���ô���൱�ڻ��������ˣ�*ָ�뷢���仯 ����Ҳ�ᷢ���仯
ָ�����Ҫ�ͱ�����type��Ӧ��ʲô�ŵķ���סʲô������
ָ������ȺP�����ָ��ָ��һ��ֵ
��ָ�����ָ
**/
#include "iostream"
#include "string"
using namespace std;

int main(void)
{
    int a = 100;
    char b ='l';
    int ary[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //char bry[]= "mengdi I miss you";
    string bry = "mengdi I miss you"; //c++��string�����ַ���  �ַ���ָ�붨����string*

    int *x = &a;
    int *y = ary; //��������������ָ��
    char *z = &b;
    string *m = &bry; //�ַ��������ǵ�ַ���������ֵ
                         //�ַ�������ַ����&bry[x]
                         ////c++��string�����ַ���  �ַ���ָ�붨����string*


    cout<< "a��ֵ��:"<< a <<endl;
    cout<< "b��ֵ��:"<< b <<endl;
    cout<< "ary��ֵ��:"<< *ary <<endl;
    cout<< "bry��ֵ��:"<< bry <<endl;
    cout<< "\n\n"<<endl;


    cout<< "a�ĵ�ַ��:"<<x <<endl;
    cout<< "b�ĵ�ַ��:"<<z<<endl;
    cout<< "ary�ĵ�ַ��:"<< y <<endl;
    cout<< "bry�ĵ�ַ��:"<< &bry <<endl;
    cout<< "bry�ĵ�ַ��:"<< m <<endl;
    cout<< "\n\n"<<endl;




    *x = 1 ;
    *y = 1;
    *z = 'F';
    *m = "xxxxxxxxx";

    cout<< "a��ֵ��:"<< a <<endl;
    cout<< "b��ֵ��:"<< b <<endl;
    cout<< "ary��ֵ��:"<< *ary <<endl;
    cout<< "bry��ֵ��:"<< bry <<endl;
    cout<< "\n\n"<<endl;

//    cout<< "bry��ֵ��:"<< &bry <<endl;
//    cout<< "b�ĵ�ֵַ��:"<<  <<endl;
//    cout<< "ary��ֵ��:"<< &ary <<endl;
//    cout<< "ary��ֵ��:"<< ary <<endl;
//    cout<< "ary��ֵ��:"<< (ary+9) <<endl;

    //cout<< "avr��ֵ��:"<< avr <<endl;
}
/**
1. �ַ�����������һ���������ַ����� == �ַ���""��ֵ
   ������һȺ������ֵ��������ֵ==��Ԫ�ص�ַ
   �ַ��������Ǳ���ֵ����������Ԫ���׵�ַ
2. *�ַ�����  ==�ַ�������ĸ
   *������ == ������Ԫ��
3. &�ַ�����  == ����ĸ��ַ
   &������   == ��������ֵ (����һ��Ԫ�صĵ�ַ)

4.c++��string�����ַ���  �ַ���ָ�붨����string*

**/
//19����ַ һ����ַ
