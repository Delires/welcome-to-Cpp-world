#include "iostream"
using namespace std;

int main(void)
{
    int avr = 100000;
    char ch = 'l';

    char *x;
    x = &ch;

    cout<< "avr的地址是:"<< &avr <<endl;
    cout<< "avr的值是:"<< avr <<endl;

    cout<< "ch的地址是:"<< x <<endl;
    cout<< "ch的值是:"<< ch <<endl;
}
