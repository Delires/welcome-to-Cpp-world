/**
const �޶��ı�����ֻ�����ܽ����޸�
����:��ֹ�Խṹ��ֵ�������
���磺�����Ķ��壬��ַ���ݵ��β���const���塣����ԭ����ַ���ݿ��Ըı�ʵ�Σ����ھͲ��ܸı��ˡ�
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

//���βθ�Ϊָ���ܽ�ʡ�ܶ��ڴ�
//��ָ���ı�ʵ��ֵ��Ϊ�˷�ֹ��������β�ָ�붨��ǰ��һ��const
void printf_struct(const student *s) //ֵ���ݲ���ı�ʵ��ֵ  ��ַ���ݻ�ı�ʵ��ֵ
{                             //ʹ�õ�ַ�����ܽ�ʡ�ڴ棬��Ϊ��ַ����ֻ����ַ��һ��ָ��ֻռ4byte����ֵ���������¿����ڴ渴����һ������
    //s->name = "Diao";
    cout<< s->name << "  " << s->age << "  "  << s->score << "  "  <<endl  ;
}

int main(void)
{
    student stu = { "Dan", 16, 100};

    printf_struct( &stu);








    cout<< "\r\n�������ַ���������\r\n"<<endl;
    cin.get();
    return 0;

}

/**
�ܽ�
��const����ֹ�������
 1.���庯���β�ָ�룬��ֹ������ʵ��������� ��Ϊ�ı�const�����ֵ�ᱨ��
**/
