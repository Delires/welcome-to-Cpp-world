#include "iostream" //iostream包含istream和ostream两个类
                    //ostream包含cout这个对象   iostream包含cin这个对象
                    //cout cin这两个对象又有不同的行为 如cin.peek cin.get
using namespace std; //语法规定 命名空间 防止 变量声明重复

//int main(void)
//{
//    char p;
//    cout << "请输入一段文本:\n" ; // << "请输入一段文本:\n"这段字流入cout 控制台输出
//
//    while(cin.peek() != '\n') //cin输入流对象 的检查元素行为cin.peek()
//                         //检测输入流的对象是不是'\n'
//    {
//        p = cin.get();  //cin.get 输入流对象得到数据的行为  得到的数据给p
//        cout << p ;  //把p的值再流到 控制台输出cout
//    }
//
//    cout << endl;   //控制台输出 直到结束
//
//    return 0;
//}
//
//



int main(void)
{

    char str[10];
    while(cin >> str)
    {
        if( cin.peek() == '\n')
        {
            break;
        }
    }

    cout << "输入值为:"<< str <<endl;

    return 0;


}
