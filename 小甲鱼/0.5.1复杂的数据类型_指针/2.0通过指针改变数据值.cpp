/**
指针的区块存放的是变量的地址
指针必须有所指向 不能有野指针
指针指向这个变量的地址了，那么就相当于互相替身了，*指针发生变化 变量也会发生变化
指针必须要和变量的type对应，什么号的房子住什么样的人
指针允许群P，多个指针指向一个值
空指针随便指
**/
#include "iostream"
#include "string"
using namespace std;

int main(void)
{
    int a = 100;
    char b ='l';
    int ary[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //char bry[]= "mengdi I miss you";
    string bry = "mengdi I miss you"; //c++中string定义字符串  字符串指针定义是string*

    int *x = &a;
    int *y = ary; //数组名本来就是指针
    char *z = &b;
    string *m = &bry; //字符串名不是地址是他本身的值
                         //字符串赋地址必须&bry[x]
                         ////c++中string定义字符串  字符串指针定义是string*


    cout<< "a的值是:"<< a <<endl;
    cout<< "b的值是:"<< b <<endl;
    cout<< "ary的值是:"<< *ary <<endl;
    cout<< "bry的值是:"<< bry <<endl;
    cout<< "\n\n"<<endl;


    cout<< "a的地址是:"<<x <<endl;
    cout<< "b的地址是:"<<z<<endl;
    cout<< "ary的地址是:"<< y <<endl;
    cout<< "bry的地址是:"<< &bry <<endl;
    cout<< "bry的地址是:"<< m <<endl;
    cout<< "\n\n"<<endl;




    *x = 1 ;
    *y = 1;
    *z = 'F';
    *m = "xxxxxxxxx";

    cout<< "a的值是:"<< a <<endl;
    cout<< "b的值是:"<< b <<endl;
    cout<< "ary的值是:"<< *ary <<endl;
    cout<< "bry的值是:"<< bry <<endl;
    cout<< "\n\n"<<endl;

//    cout<< "bry的值是:"<< &bry <<endl;
//    cout<< "b的地址值是:"<<  <<endl;
//    cout<< "ary的值是:"<< &ary <<endl;
//    cout<< "ary的值是:"<< ary <<endl;
//    cout<< "ary的值是:"<< (ary+9) <<endl;

    //cout<< "avr的值是:"<< avr <<endl;
}
/**
1. 字符串更类似于一个变量，字符串名 == 字符串""的值
   数组是一群变量的值，数组名值==首元素地址
   字符串名就是变量值，数组名是元素首地址
2. *字符串名  ==字符串首字母
   *数组名 == 数组首元素
3. &字符串名  == 首字母地址
   &数组名   == 数组名的值 (即第一个元素的地址)

4.c++中string定义字符串  字符串指针定义是string*

**/
//19个地址 一个地址
