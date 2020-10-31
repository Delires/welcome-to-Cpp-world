/**
封装:把行为和属性集合成一个整体,并给予一定的作用域。通过这个封装来表达，某一类事物，或将对象实体化
封装---访问权限(作用域)
1.在类的设计时，把行为和属性放在不同的权限下，加以控制。
2.权限有三种: public    公共权限  成员类内可以访问 类外可以访问
              protected 保护权限  成员类内可以访问 类外不可以访问
              private   私有权限  成员类内可以访问 类外不可以访问
  在学习继承(分为子类和父类)时protected和private才有所区别，子类继承父类时protected可以访问，
  子类继承父类时private不可以访问(protected的成员是你爸的车你可以继承，private的成员是你爸的老婆你不可以继承)
3.类的属性和行为统一叫做成员

**/
#include "iostream"
using namespace std;
/**封装三种访问权限 public protected private**/
//public 公共权限       成员类内可以访问,类外可以访问
//protected 保护权限    成员类内可以访问,类外不可以访问
//private   私有权限    成员类内可以访问,类外不可以访问

class Person
{
public:
  //公共权限内容
    string m_Name;
protected:
  //保护权限内容
    string m_Car;
private:
  //私有权限内容
    int m_Card;

public:
    void set_message()
    {
        m_Name = "bOB";
        m_Car = "别克";  //在类内 protected 和 private 可以访问
        m_Card = 9527;

        cout<< m_Name<<endl;
        cout<< m_Car<<endl;
        cout<< m_Card<<endl;
    }


};


int main(void)
{
    Person p1;
    p1.m_Name = "Peter";
    //p1.m_Car = "奔驰"; //error: string Person::m_Car' is protected|
    //p1.m_Card = 4386; //error::string Person::m_Card' is private|
                    //在类外 protected 和 private 不可以访问
    p1.set_message();
    cout<< "\r\n\r\n请输入字符串结束程序运行\r\n"<< endl;
    cin.get();
    return 0;
}


/**
SUMMERIZE:
1.封装的三种权限 public protected private
2.类内三种互相P,不影响
3.类外protected private不行
4.继承protected行  private不行
**/
