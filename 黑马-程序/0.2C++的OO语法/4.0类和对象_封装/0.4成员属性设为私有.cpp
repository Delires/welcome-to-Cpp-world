/**
属性和行为统一叫做成员
            属性 别名 "成员属性" "成员变量"
            行为 别名 "成员函数" "成员方法"
成员属性设为私有有如下优点:
1.成员属性设为私有可以"控制读写权限"
2.对于写权限，我们可以检测数据的有效性。写函数加上判断来判断成员属性设置的有效性
**/
#include "iostream"
using namespace std;

/** 成员属性设置为私有**/
//1.设为私有可 "控制读写权限"
//2.对于写权限,可检测数据有效性
class  Person
{
public: //通过设置公共的成员函数,来侧面的对成员属性进行操作
    //写姓名接口
    void set_Name(string name)
    {
        m_Name = name;
    }
    //读姓名接口
    string get_Name(void)
    {
        return m_Name;
    }


    //获取年龄接口, -----把年龄改为可读可写,但年龄范围必须在0~150之间
    int get_Age(void)
    {
        return m_Age;
    }
    //设置年龄接口, -----把年龄改为可读可写,但年龄范围必须在0~150之间
    void set_Age(int age)
    {
        if(age<0 || age >150)
        {
            m_Age = 0;
            cout<< "你这老王八,年龄赋值失败"<<endl;
            return; //无返回值直接return结束函数
        }
        m_Age = age;
    }

    //设置年龄接口
    void set_Lover(string Lover)
    {
        m_Lover = Lover;
    }

private:
    //姓名:可读可写权限
    string m_Name;
    //年龄:可读权限
    int m_Age; //calss默认权限是private
    //情人:可写权限
    string m_Lover;

};

int main(void)
{
    Person zhangsan;
//通过对成员函数的设置  让成员函数对私有的成员属性进行操作  来控制成员属性的"读写权限"
    zhangsan.set_Name("张三");
    cout<< "姓名是:"<<zhangsan.get_Name()<<endl;

//类成员函数设置---进而操作私有的成员属性---从而控制读写权限
    zhangsan.set_Age(8);
    cout<< "年龄是:"<<zhangsan.get_Age()<<endl;
    //zhangsan.m_Age = 16;//不能操作,只能通过成员函数操作

//情人外只能设置不能读取,
    zhangsan.set_Lover("苍井空");
    //cout<< "年龄是:"<<zhangsan.m_Lover<<endl;



    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}


/**
SUMMERIZE:
1.把所有成员属性设为private,外接不能读取
2.通过设置类里的成员函数,get或set----进而操作成员属性---从而完成对成员属性读写权限的设置.
3.通过设置类里的成员函数来设置成员属性----函数加上判断来判断成员属性设置的有效性
**/
