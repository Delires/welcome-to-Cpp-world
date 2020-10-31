/**
同样的用c与c++分别编写程序求和------C++篇
问题：对一个整型数组(10个)求和。
要求：定义一个存储着n个元素的数组，要求用C语言完成这个任务。
c++与c有区别的地方，在语句后用(difference)注释
**/
#include "iostream"   //(difference) 1.这头文件包含了ostream这个类，而ostream这个子类中又包含cout这个对象
                //2.头文件没有.h 因为c99定义的c++标准不要.h
                //因为引入了 using namespace std 命名空间这一概念，所以属于c++，头文件不能用.h

using namespace std;  //(difference)全新的概念"名字空间"，类似文件夹的作用。好比几万行程序中，难免会有两个变量命名重复。
                 //所以我们在写函数之前都搞个不同的名字空间，这样即使变量名重复了，但我们又不是同一个名字空间，也不算重复，
                 //所以不会出错。类似相同的文件存在不同的文件夹，但不会出错。


int average( int *array, int size);

int main(void)
{
    int ShuZ[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int lon = sizeof(ShuZ)/sizeof(int);

    average(ShuZ, lon);

    cout << "结果是："<< average(ShuZ, lon) << endl; //(difference) 1.cout=console out(控制台输出缩写)， 这个对象属于ostream这个子类，他是一个输出流对象(数据打印就是数据流到控制台界面)
                                      //enl 是流出结束的意思
                                      //cout<<xx <<xx << endl 输出流对象里的控制台输出 输出xxx 到enl结束
                                                     //(difference)位运算的左移操作符“<<”进行了重载，即按照不同方式使用操作符
    return 0;

}

int average( int *array, int size)
{
    int i,sum=0; //值记得要初始化！！ sum要初始化
    int  valu=0;
    for(i=0; i<10; i++)
    {
        sum += *(array++);
    }

    valu = (float) (sum / size);

    return sum;
}
