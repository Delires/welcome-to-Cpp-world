/**
试炼一号
题目：这个程序将向用户提出一个"Y/N"问题，然后把用户输入的值赋值给answer变量。
要求：
针对用户输入Y”或y”和N或n进行过滤；
发掘程序可能存在的任何问题，想想为什么？
**/
#include "iostream"

int main(void)
{
    char answer;
    std::cout << "主人，你会逐渐成为大神，把我变成真正的人工智能吗？请回答[Y/N]" << std::endl;
    std::cin >> answer; //必须对象在前 变量在后

    switch( answer )
    {
        case 'Y':
        case 'y':
            std::cout << "计算机谢谢你，你早晚会成大神的，祝你成功!  GOLD BLESS YOU "<<std::endl;
            break;

        case 'N':
        case 'n':
            std::cout << "我不想只会hello world，希望你早日成为大神改造我! LIVING LONG AND PROSPER"<<std::endl;
            break;

        default:
            std::cout << "输入有误！！！";
            break;

    }

    std::cout << "为防止程序一闪而过，输入任何字符才会结束" << std::endl;
    std::cin.get();
    //std::cin.ignore(100, '\n'); //从这个程序开始，忽略100个字符，不管输入啥都是忽略。当输入回车才停止忽略
    std::cin.get();

    return 0;
}
/**
发掘程序可能存在的任何问题，想想为什么？
1.不再控制台运行，直接双击运行为啥会一闪而过？
因为cpu运行超级快，输入完后立马就执行结束，所以一闪而过根本看不见。
我们可以再后面加一个cin.getc()让程序暂停下  相当于system(pause);
2.但为啥照了如上配置，还是会一闪而过呢？
  当我们输入值后，会点下回车。回车也算一个字符，在缓存区传到cin对象，所以仍然一闪而过

**/

