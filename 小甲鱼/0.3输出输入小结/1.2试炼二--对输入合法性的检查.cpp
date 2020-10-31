/**
对输入合法性的进一步检查和提高
1.合法性检查:question2输入狂按’\n’怎么办？
   做一个判断，每当\n输的多久提醒
2.合法性检查:输入的温度一看就不是正常温度怎么办？
   做一个判断，每温度不正常就退出

**/

#include "iostream"
using namespace std;

int main(void)
{
    const unsigned short ADD_SUBSTRACT = 32.0;
    const double RATIO                 = 9.0/5.0;
      //定义魔鬼数数字同样也可以用#define 可const和#define有什么区别呢？

    double TempIn, TempOut; //cin输入的浮点型变量 会输入到double变量
    char TypeIn, TypeOut;  //cin输入的字符型变量 会输入到char变量
    //cin >> TempIn;
    //cin >> TypeIn;

    cout << "请按摄氏或华氏输入一个温度，按[xx.xC]或[xx.xF]的格式" <<endl;
    cin >>  TempIn >> TypeIn;//上面分开写法的概括，会自动读取不同的输入到变量中
                          //读取输入流的字符串要用get.line();
                          //注意输入的顺序问题
    std::cin.ignore(100, '\n');//从这个程序开始，对于输入流的前一百的字符内如果存在\n 的话，那么在\n 之前的字符全部忽略掉，
                               //为了清除键盘区对输入之后的缓存
    //cout<<TempIn<<endl; //调试部分
    //cout<<TypeIn<<endl;
    switch (TypeIn)
        {
            case 'C':
            case 'c':
                 if( (TempIn > 1000.0) || (TempIn < -1000.0) ) //温度输入不正常
                 {
                     //cout << "温度输入错误，不再范围内"<< endl;
                     TempOut = 0;
                     //cout << TempOut;
                     break;

                 }
                 else
                 {
                    TempOut = TempIn * RATIO + ADD_SUBSTRACT;
                    TypeOut = 'F';
                    TypeIn = 'C';
                    break; //别忘了结束啊
                 }


            case 'F':
            case 'f':
                if( (TempIn > 1000.0) || (TempIn < -1000.0) ) //温度输入不正常
                 {
                     //cout << "温度输入错误，不再范围内"<< endl;
                     TempOut = 0;
                      //cout << TempOut;
                     break;

                 }
                 else
                 {
                    TempOut = (TempIn  - ADD_SUBSTRACT) /RATIO;
                    TypeOut = 'C';
                    TypeIn = 'F';
                    break; //别忘了结束啊
                 }


            default:
                 TypeOut = 'E';
                 break;
        }
//小甲鱼的处理，加上判断，输入错误后就不输出温度转换值了
    if( (TypeOut != 'E') && (TempOut != 0) )
    {
        cout <<"温度转换值为:"<<TempIn<<TypeIn
             << "=" <<TempOut<<TypeOut << "\n\n"<< endl;
    }

    else
    {
        cout <<"输入错误，请按按[xx.xC]或[xx.xF]的格式, 或温度要在-1000~1000之内"<< endl;
    }

//下部分防止程序一闪而过 小甲鱼多的部分，在.EXE运行时不至于一闪而过
    cout << "请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}
