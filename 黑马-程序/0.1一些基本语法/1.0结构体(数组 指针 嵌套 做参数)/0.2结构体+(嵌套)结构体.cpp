/**
�ṹ��Ƕ�׽ṹ��:��һ���ṹ����Ƕ�׳�����һ���ṹ�塣������ʦ����Ϣ�о���������ѧ������Ϣ
д��:�ṹ��
     {
       �ṹ��;
     }
��ֵ��ʱ��Ҫ�������ӽṹ��Ķ�����и�ֵ
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


struct teacher
{
    int id;
    string name;
    student stu;
};



int main(void)
{
    teacher tea;
    tea.id = 4327;
    tea.name = "Bob";

    tea.stu.name = "Dan"; //�����������ӽṹ��Ķ���Ȼ����и���
    tea.stu.age = 16;
    tea.stu.score = 100;



    cout<< tea.id << "  " << tea.name << "  "
        << tea.stu.name << "  " << tea.stu.age << "  "
        << tea.stu.score << "  " <<endl  ;





    cout<< "\r\n�������ַ���������\r\n"<<endl;
    cin.get();
    return 0;

}

/**
�ܽ�

**/
