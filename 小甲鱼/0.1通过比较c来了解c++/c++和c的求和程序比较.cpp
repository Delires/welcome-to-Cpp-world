/**
ͬ������c��c++�ֱ��д�������------C++ƪ
���⣺��һ����������(10��)��͡�
Ҫ�󣺶���һ���洢��n��Ԫ�ص����飬Ҫ����C��������������
c++��c������ĵط�����������(difference)ע��
**/
#include "iostream"   //(difference) 1.��ͷ�ļ�������ostream����࣬��ostream����������ְ���cout�������
                //2.ͷ�ļ�û��.h ��Ϊc99�����c++��׼��Ҫ.h
                //��Ϊ������ using namespace std �����ռ���һ�����������c++��ͷ�ļ�������.h

using namespace std;  //(difference)ȫ�µĸ���"���ֿռ�"�������ļ��е����á��ñȼ����г����У���������������������ظ���
                 //����������д����֮ǰ�������ͬ�����ֿռ䣬������ʹ�������ظ��ˣ��������ֲ���ͬһ�����ֿռ䣬Ҳ�����ظ���
                 //���Բ������������ͬ���ļ����ڲ�ͬ���ļ��У����������


int average( int *array, int size);

int main(void)
{
    int ShuZ[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int lon = sizeof(ShuZ)/sizeof(int);

    average(ShuZ, lon);

    cout << "����ǣ�"<< average(ShuZ, lon) << endl; //(difference) 1.cout=console out(����̨�����д)�� �����������ostream������࣬����һ�����������(���ݴ�ӡ����������������̨����)
                                      //enl ��������������˼
                                      //cout<<xx <<xx << endl �����������Ŀ���̨��� ���xxx ��enl����
                                                     //(difference)λ��������Ʋ�������<<�����������أ������ղ�ͬ��ʽʹ�ò�����
    return 0;

}

int average( int *array, int size)
{
    int i,sum=0; //ֵ�ǵ�Ҫ��ʼ������ sumҪ��ʼ��
    int  valu=0;
    for(i=0; i<10; i++)
    {
        sum += *(array++);
    }

    valu = (float) (sum / size);

    return sum;
}
