/**
void * 指针匹配任何常量， 可以直接把别的变量的地址赋值过去
但在void*指针作为其他函数实参时，需要强制转换和函数形参一致
如 siz( (int*)p , avr);

在 ANSI C 中使用它来代替“char*”作为通用指针的类型。变量中char是通用的
由于 void 指针没有特定的类型，因此它可以指向任何类型的数据。也就是说，任何类型的指针都可以直接赋值给 void 指针
但要将 void 指针赋值给其他类型的指针，必须进行强制类型转换。正如男人是人，但人不是男人
对于 void 指针，编译器并不知道所指对象的大小，所以对 void 指针进行算术操作都是不合法的，void *p; p++是有问题的
空指针不能作为输出流对象输出，必须强制转换为有具体类型的指针

**/
#include "iostream"
#include "string"
#define VOIDPOINT    0
using namespace std;

#if (VOIDPOINT)
int siz(int *l, int number);

int main(void)
{
    int avr = 100000;
    char ch = 'l';

    void *p, *q;

     p = &avr;
     q = &ch;

    cout<< "avr的地址是:"<< p <<endl;
    cout<< "avr的值是:"<< avr <<endl;
    cout<< "\n\n"<<endl;

    cout<< "ch的地址是:"<< q <<endl;
    cout<< "ch的值是:"<< ch <<endl;
    cout<< "\n\n"<<endl;

    siz( (int*)p , avr); //void*指针作为其他函数实参时，需要强制转换和函数形参一致

    //cout<< "ch的地址是:"<< x <<endl;
    //cout<< "ch的值是:"<< ch <<endl;

    return 0;

}

int siz(int *l, int number)
{
    cout<< "void型指针作为实参传入 要强制转换和形参变量一致"<<endl;
    cout << l << endl;
    cout << number << endl;

    return 0;
}



#else   //void指针的自增是不合理的


int main(void)
{

   string ch= "mengdi shi ge gou";

    void *p;
    string *q;

     p = &ch;
     q = &ch;



    cout<< "ch的地址是:"<< *q <<endl;

    p++; //warning: ISO C++ forbids incrementing a pointer of type 'void*' [-Wpointer-arith]|
         //禁止一个void*类型的指针做增加运算
    cout<< "ch的值是:"<< ch <<endl;

    cout<< "ch的空指针p自增:"<< *(char*)p <<endl;
                                //error: 'void*' is not a pointer-to-object type|
                                //空指针不能作为输出流对象输出，必须强制转换为有具体类型的指针
    cout<< "\n\n"<<endl;


    return 0;

}

#endif
