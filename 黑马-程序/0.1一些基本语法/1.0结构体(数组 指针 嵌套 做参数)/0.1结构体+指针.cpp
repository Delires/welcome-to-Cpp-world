/**
�ṹ��ָ��: ����һ��ָ�룬ָ��ָ��ṹ�塣
����ָ��: �ṹ���� *ָ����      ָ��ͱ�������һ��
������ָ��ķ���: ָ����->��Ա��
                  (*ָ����).��Ա��
**/
#include "iostream"
#include "string"
using namespace std;

//�ṹ�� ����Ķ��嶼�ź����� �����洢����ջ�������ڶ�������Ƭ�����Ῠ��
struct student
{
    string name;
    int age;
    int score;
};


int main(void)
{
    student ar = {"bob", 16, 100};  //���ṹ��Ԫ�����鸳ֵ
    student *p = &ar;


    cout<< p->name << "  " <<p->age<< "  "  //ͨ�� -> ������
                        <<p->score << "  "<<endl  ;

    cout<< (*p).name << "  " << (*p).age << "  "  //ͨ�� (*ָ����).��Ա�� ������
                        << (*p).score << "  "<<endl  ;



    cout<< "\r\n�������ַ���������\r\n"<<endl;
    cin.get();
    return 0;

}

/**
�ܽ�
�ṹ������Ķ���: struct �ṹ���� ������[len]={ {}�� {}�� {}}��
ȡֵ������ֵ: ������[len].��Ա=xxx��
**/
