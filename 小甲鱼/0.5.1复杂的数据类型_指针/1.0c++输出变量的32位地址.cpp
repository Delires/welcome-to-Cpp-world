#include "iostream"
using namespace std;

int main(void)
{
    int avr = 100000;
    char ch = 'l';

    char *x;
    x = &ch;

    cout<< "avr�ĵ�ַ��:"<< &avr <<endl;
    cout<< "avr��ֵ��:"<< avr <<endl;

    cout<< "ch�ĵ�ַ��:"<< x <<endl;
    cout<< "ch��ֵ��:"<< ch <<endl;
}
