/**
1.���������أ�һ������������;������ֻ��һ��������ⷽ��������������������Զ���
2.�������ض��壺��������ͬ�������������ͬ�����ﵽ��;��ͬ��Ŀ�ġ�
3.����ͨ���ββ�ͬ�����أ�����ͬͨ������ֵ��ͬ�����ء�
        int caucl();
        double caucl();
  ����ͨ������ֵ���أ����õ�ʱ����caucl()���������޷��ֱ浽�����ĸ���
4.�����ܲ��þͲ��ã��õĻ�һ��Ҫע�������
**/
/**
�������غ��̵ķ������һ�����򣬼�����ͨ������"calc���������м��㲢������ʾ�����
  ������һ������ʱ������ò�����ƽ��ֵ��
  ��������������ʱ���������������Ļ���
  ��������������ʱ���������������ĺ͡�
**/

#include "iostream"  //����������cout��cin���������������
using namespace std; //C������׼������е����б�ʶ������������һ����Ϊstd��namespace�С�
                 //���������ռ�std�ڶ�������б�ʶ������Ч���ع⣩���ͺ������Ǳ�����Ϊȫ�ֱ���һ����
                 //��ô����������ֱ�ӵ���cout cin
#define JIAYU 1
#if  JIAYU
int caucl( int x);
int caucl( int x, int y);
int caucl( int x, int y, int z);

int main(void)
{
    int val;
    int a,b,c;

//С��������Ĳ���ֵ����������õ��ġ�����ֱ�ӵõ���
    cin>>a>>b>>c;  //����ǵÿո����

    cout << "caucl����������βθ�����ͬ�������ͬ"<< endl;
    cout << "���غ�����ֵΪ:"<<caucl(a) << endl;
    cout << "���غ�����ֵΪ:"<<caucl(a,b) << endl;
    cout << "���غ�����ֵΪ:"<<caucl(a,b,c) << endl;

    return 0;
}


int caucl( int x)
{
    int value;
    value = x *x;

    return value;
}

int caucl( int x, int y)
{
    int value;
    value = x *y;

    return value;
}

int caucl( int x, int y, int z)
{
    int value;
    value = x + y + z;

    return value;
}


#else
//�Ժ����������أ�����������ֵ����һ�£��βθ��������Ͳ�ͬ
int caucl( int x);
int caucl( int x, int y);
int caucl( int x, int y, int z);

int main(void)
{
    int val;
    int a = 1, b=2, c=3;
    val = caucl(a, b,c);
    cout << "caucl����������βθ�����ͬ�������ͬ"<< endl;
    cout << "���غ�����ֵΪ:"<<val << endl;

    return 0;
}


int caucl( int x)
{
    int value;
    value = x *x;

    return value;
}

int caucl( int x, int y)
{
    int value;
    value = x *y;

    return value;
}

int caucl( int x, int y, int z)
{
    int value;
    value = x + y + z;

    return value;
}
#endif // JIAYU
