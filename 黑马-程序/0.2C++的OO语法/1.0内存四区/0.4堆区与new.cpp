/**
�ڳ������󣬲���������---����  new + delete
    �����ɳ���Ա�ַ�������������,�ɳ���Ա�����ͷš�new�ؼ��ַ����ٿռ�
    1.new�ؼ��ֲ�����̬����ı���,�ñ�������ڶ���
    2.�÷�: new ��������(��ʼ��ֵ)
    3.new�ؼ��ַ��ص���һ��ָ��,�����Ҫһ��ͬ���͵�ָ������������ֵ
    4.new�����ڴ��ǵ�Ҫ�ͷţ���delete�ؼ���  delete(��ַ) ֮���ַ��ָ��� ��Ȼ�޷�����ɾ��
    5.ɾ�������  delete(ָ��);
                  ָ�� = NULL;

**/
#include "iostream"
#include "string"
using namespace std;


int* fuction( void)
{
    int *p = new int(88);


    return p;
}


//��������һ������
void test01( void)
{
    int *p = fuction();

    cout<< *p<<endl;
    cout<< *p<<endl;
    cout<< *p<<endl;

    delete p;
    p = NULL;  //�ͷŶ�̬������ڴ�,�ⲿ���ڴ��޷���ӡ
    //cout<< *p<<endl;
}


//��������һ������
void test02( void)
{
    //����10����������
    int *arr = new int[10]; //���ܶ�new������,�Խ���new��ַ��ָ����в���
    for(int i=0; i<10; i++)
    {
        arr[i]=100+i;
    }

    for(int i=0; i<10; i++)
    {
        cout<< arr[i]<< "  ";
    }

    cout<<"\r\n\r\n  "<<endl;
    delete[] arr; //delete[] ����[]�������ͷŵ���һ������
    arr = NULL; //���������ڴ�Ĵ���
//    for(int i=0; i<10; i++)
//    {
//        cout<< arr[i]<< "  ";
//    }

}



int main(void)
{


    //test01( );
    test02();



    cout<< "\r\n\r\n�����ַ��������\r\n"<<endl;
    cin.get();
    return 0;
}

/**
����:
    1.�������� new int[���鳤��];
    2.���鸳ֵ:  int *p =  new int[xx];  p[i]={};
    3.�ͷ��ڴ� delete[] p;  p =NULL;   //�ǵ�delete��[]
**/
