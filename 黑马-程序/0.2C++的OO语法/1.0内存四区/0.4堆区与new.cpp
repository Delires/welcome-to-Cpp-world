/**
在程序编译后，产生的区域---堆区  new + delete
    堆区由程序员字符掌握生命周期,由程序员开辟释放。new关键字符开辟空间
    1.new关键字产生动态分配的变量,该变量存放在堆区
    2.用法: new 变量类型(初始化值)
    3.new关键字返回的是一个指针,因此需要一个同类型的指针变量来存放其值
    4.new开辟内存后记得要释放，用delete关键字  delete(地址) 之后地址再指向空 不然无法正常删除
    5.删除最好是  delete(指针);
                  指针 = NULL;

**/
#include "iostream"
#include "string"
using namespace std;


int* fuction( void)
{
    int *p = new int(88);


    return p;
}


//堆曲开辟一块整型
void test01( void)
{
    int *p = fuction();

    cout<< *p<<endl;
    cout<< *p<<endl;
    cout<< *p<<endl;

    delete p;
    p = NULL;  //释放动态分配的内存,这部分内存无法打印
    //cout<< *p<<endl;
}


//堆曲开辟一块数组
void test02( void)
{
    //创建10个整型数组
    int *arr = new int[10]; //不能对new来操作,对接收new地址的指针进行操作
    for(int i=0; i<10; i++)
    {
        arr[i]=100+i;
    }

    for(int i=0; i<10; i++)
    {
        cout<< arr[i]<< "  ";
    }

    cout<<"\r\n\r\n  "<<endl;
    delete[] arr; //delete[] 加上[]告诉他释放的是一个数组
    arr = NULL; //否则有脏内存的存在
//    for(int i=0; i<10; i++)
//    {
//        cout<< arr[i]<< "  ";
//    }

}



int main(void)
{


    //test01( );
    test02();



    cout<< "\r\n\r\n输入字符程序结束\r\n"<<endl;
    cin.get();
    return 0;
}

/**
结论:
    1.开辟数组 new int[数组长度];
    2.数组赋值:  int *p =  new int[xx];  p[i]={};
    3.释放内存 delete[] p;  p =NULL;   //记得delete加[]
**/
