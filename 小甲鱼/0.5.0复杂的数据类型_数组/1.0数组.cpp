/**
��C++ʵ��һ��ʹ����������񣬲�̸̸��ʹ��������Щ�ط���Ҫע��ġ�
������񣺶���һ����������10����������Щ���������û����롣
        ���ǽ�������Щֵ���ۼӺ͡�ƽ��ֵ�������
**/
#include "iostream"

#define JIAYU 0
using namespace std;

#if  JIAYU
int main(void)
{
    int array[10];
    int val=0, i;

    for(i=0; i<10; i++)
    {
        cout<<"�������"<<i+1<<"������  ";
        cin >> array[i];
    }

    for(i=0; i<10; i++)
    {
        val += i;
    }

    cout<<"����ĺ�Ϊ��"<<val<<endl;
    cout<<"�����ƽ��ֵΪ��"<<(float)val/10<<endl;


}

#else //���������ǶԳ��������չ�����������ƣ��������׳���
//1. �ú궨��ı����鳤�ȣ��ú������Լ������ⳤ�ȵ�����
//2. �ж�cin�����Ƿ���������������������1�����������󷵻�0
#define ITEM 5
int main(void)
{
    int array[ITEM];
    int val=0, i;

    cout<<"������"<<ITEM<<"������"<<endl;
    for(i=0; i<ITEM; i++)
    {
        cout<<"�������"<<i+1<<"������  ";
        while( ! (cin >> array[i]) ) //���������������ֹͣ���룬����0
        {
            cin.clear(); //cin�������һ������,�������,������������
            cin.ignore(100, '\n');  //������̵Ļ���
            cout<<"����ʱint�ͣ�������Ϸ�ֵ";  //������ctrl+b�����ж�
        }
    }

    for(i=0; i<ITEM; i++)
    {
        val += array[i];
    }

    cout<<"����ĺ�Ϊ��"<<val<<endl;
    cout<<"�����ƽ��ֵΪ��"<<(float)val/ITEM<<endl;


}
#endif
