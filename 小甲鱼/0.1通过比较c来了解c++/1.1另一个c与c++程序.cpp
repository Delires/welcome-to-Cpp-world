/**
同样的用c与c++分别编写程序求和2------C++篇
要求：编写一个程序，要求用户输入一书整数和任意数目的空格，这些整数必须位于同一行中，
      但允许出现在该行中的任何位置。当用户按下键盘上的“Enter”键时，数据输入结束。程序自动
      对所有的整数进行求和并打印出结果。
有区别的地方用(differnce)标出
**/

#include "iostream"  //(differnce) 1.这头文件包含了ostream和isteam这个类，
                //ostream这个子类中又包含cout这个对象   istream这个子类中又包含cin这个对象
using namespace std; //(differnce)名字空间 为定义的变量开辟一个姓名空间，防止定义变量过多重复
//scanf只能接收数字，接收特殊符号用getchar
int main(void)
{
    int sum=0;
    double i;

    cout << "请输入任意数字："; //cout console out控制台输出 输出流对象里的一种   属于ostream类里的一种对象

    while( cin >> i )  // (differnce) cin istream类里的一种对象  它知道如何从用户终端读取数据
    {         //cin知道如何从用户终端提取数据，cin称作提取操作符，它一次从 输入流对象cin里 提取一个整数
              //当用户输入数据时，对应的字符就会输入到键盘缓存区。当按下回车，数据就会从键盘缓存区到操作流里 输入流对象cin里
              // >> 从 输入流对象cin里 提取数据
              //int i  >>i  所以是从 输入流对象cin里 提取int，float，double型作为叠加
              //                      把cin里的值流到i里，每次流1个 只有数才能流到i里
        sum += i;
//消耗掉空格
        while( cin.peek() == ' ') //(differnce)  cin.peek()  cin是一个对象  .peek是这种对象的一种行为 ，行为就是一种函数的实现方法(函数干了啥)。一个对象有各种各样的行为  属性就是函数的变量
        {                    //cin.peek() 是从 输入流对象cin 挨个挑出输入的数据
            cin.get();           //cin.peek()是cin的一个行为 继续得到数据
        }
//判断结束标志位
        if( cin.peek() == '\n') //输入流对象cin 挑出的对象有 '\n'就结束循环
        {
            break;
        }

    }
    cout<<"输出结果是"<<sum<<endl;
}
/**
C与C++的变化：
从操作某个过程 如是否getchar()了一个' '。变成了操作一个对象的一些行为，如对象cin的行为.peek是否是' '
所以面对对象更容易编写大型程序，更能把一个东西具体化，程序的每步操作都变成了不同对象的不同行为。通过不同对象的行为来进行编程，分工更明确
**/
