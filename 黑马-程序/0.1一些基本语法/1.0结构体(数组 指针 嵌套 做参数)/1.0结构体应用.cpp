/**
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է����� ����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
�õ�:�ṹ�壬�ṹ�����飬
**/

#include "iostream"
#include "string"
using namespace std;
#define number 3

//�ṹ�� ����Ķ��嶼�ź����� �����洢����ջ�������ڶ�������Ƭ�����Ῠ��
struct student
{
    string name;
    int score;
};
struct teacher
{
    string name;
    student S_arr[5];
};

//���βθ�Ϊָ���ܽ�ʡ�ܶ��ڴ�
//��ָ���ı�ʵ��ֵ��Ϊ�˷�ֹ��������β�ָ�붨��ǰ��һ��const
void printf_struct(const teacher *p, int len) //ֵ���ݲ���ı�ʵ��ֵ  ��ַ���ݻ�ı�ʵ��ֵ
{                             //ʹ�õ�ַ�����ܽ�ʡ�ڴ棬��Ϊ��ַ����ֻ����ַ��һ��ָ��ֻռ4byte����ֵ���������¿����ڴ渴����һ������
    int i, j;
    for(i=0; i<len; i++)
    {
        cout<<"��"<<i<<"����ʦ������:"<<(p+i)->name <<endl;
        for(j=0; j<5; j++)
        {
            cout<<"��"<<i<<"����ʦ�ĵ�"<<j<<"��ѧ������:"<<(p+i)->S_arr[j].name <<endl;
            cout<<"��"<<i<<"����ʦ�ĵ�"<<j<<"��ѧ������:"<<(p+i)->S_arr[j].score <<endl;
        }


    }



}

int main(void)
{
    int i, j;
    teacher T_arr[number];
    for(i=0; i<number; i++)
    {
        cout<< "�������"<<i<<"����ʦ����Ϣ"<<endl;
        cout<<"��ʦ����:";
        cin >> T_arr[i].name;
        cout<<"������"<< T_arr[i].name << "��ʦ����ѧ������Ϣ";
        for(j=0; j<5; j++)
        {
            cout<< "�������"<<j<<"��ѧ��������";
            cin >> T_arr[i].S_arr[j].name;
            cout<< "�������"<<j<<"��ѧ���ķ���";
            cin >> T_arr[i].S_arr[j].score;
            cout<<"\r\n"<<endl;
        }
        cout<<"\r\n \r\n"<<endl;
    }

    printf_struct(T_arr, number);








    cout<< "\r\n�������ַ���������\r\n"<<endl;
    cin.get();
    return 0;

}

/**
�ܽ�
��const����ֹ�������
 1.���庯���β�ָ�룬��ֹ������ʵ��������� ��Ϊ�ı�const�����ֵ�ᱨ��
**/
