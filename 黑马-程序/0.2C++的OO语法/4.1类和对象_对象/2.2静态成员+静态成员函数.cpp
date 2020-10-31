/**
静态成员变量  和  静态成员函数
静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
静态成员分为：
1.静态成员变量
   1.1 所有对象共享同一份数据
   1.2 在编译阶段分配内存(静态放在全局区,特点是每次调用后不会释放)
   1.3 类内声明(static 变量类型 name)，类外初始化(变量类型 类名::name=xx;)
2.静态成员函数
   2.1 所有对象共享同一个函数(不管类具体化多少个对象,只有一个静态函数,他不属于任何一个对象)
   2.2 静态成员函数只能访问静态成员变量
   2.3 静态函数通过对象访问(对象.静态函数)   通过类名访问(类名::静态函数名)
   2.4 静态成员函数也是有访问权限的,private不能访问
**/
#include "iostream"
#include "string"
using namespace std;


class Person
{
public:
//静态成员函数
    static void fuc(void)
    {
        m_Name ="change static variable"; ///2.2静态成员函数只能访问静态成员变量
        //a = 16; ///2.2静态成员函数不能访问菲静态成员变量 因为静态函数是公共的那你调用的时候这个成员属性是谁的？这个属性是对象特有的,人家会让你上吗？
        cout<< "静态函数fuc(void)的调用"<<endl;
    }

public:
///1.3静态成员变量 类内声明(static 变量类型 name）
    static string m_Name;
    int a;

private:
    static void fuc2(void)
    {
         cout<< "private下静态函数fuc(void)的调用"<<endl;
    }
} ;

///1.3类外初始化(变量类型 类名::name=xx;)
string Person::m_Name = 0; //类外初始化

void test01()
{
    ///2.3静态函数通过对象访问(对象.静态函数)
    Person p1;
    p1.fuc();
    ///2.3通过类名访问(类名::静态函数名)
    Person::fuc();
    //Person::fuc2(); ///2.4 静态成员函数也是有访问权限的,private不能访问
}

int main(void)
{
    test01();


    cout<< "\r\n\r\n输入任意字符结束程序\r\n"<<endl;
    cin.get();
    return 0;
}
/**
SUMMERIZE:
1.静态成员(函数变量)就是类里的公交车,谁都可以上
2.静态成员函数只能访问静态函数(公交车之间无所谓),不能访问别的属性(非静态属性是别的对象特有的不让你上)
3.静态函数也是有访问权限的,private也访问不到
4.静态函数就是公交车，只有那一个,谁都能访问. 类名::静态函数名  对象.静态函数名
5.静态变量 类内声明(static 变量类型 name)，类外初始化(变量类型 类名::name=xx;)

6.总之一点"静态成员(函数/变量)就只有一份,所有对象共享"
**/
