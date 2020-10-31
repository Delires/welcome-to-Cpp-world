/**
试炼二号
题目：编写一个温度转换函数，摄氏C转化为华氏.用xxx.xC输入xxx.xF转换
要求：
如果用户输入34.2C则输出90.32F
要点：对输入的C和F进行识别然后转换
**/

//华氏温度 == 摄制温度 * 9 /5 +32
//摄制温度 == 华氏温度-32 * 5 / 9
//注意，\除法是不求小数的 ， 如果要有小数要定义为double型 会5.0/9.0 加上.0


/**
const 与 #define 之争
    ①   起作用阶段来说: #define在预编译阶段起作用，const在编译运行时起作用
    ②	存储而言: #define占代码段空间，const占数据段空间。#define相比较更节省内存。
    ③	const可以调试  #define不行
    ④	#define在C中常用  const在c++中用
**/
#define JIAYU 0
#include "iostream"
using namespace std;

#if JIAYU
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
                 TempOut = TempIn * RATIO + ADD_SUBSTRACT;
                 TypeOut = 'F';
                 TypeIn = 'C';
                 break; //别忘了结束啊

            case 'F':
            case 'f':
                 TempOut = (TempIn  - ADD_SUBSTRACT) /RATIO;
                 TypeOut = 'C';
                 TypeIn = 'F';
                 break; //别忘了结束啊

            default:
                 TypeOut = 'E';
                 break;
        }
//小甲鱼的处理，加上判断，输入错误后就不输出温度转换值了
    if( TypeOut != 'E')
    {
        cout <<"温度转换值为:"<<TempIn<<TypeIn
             << "=" <<TempOut<<TypeOut << "\n\n"<< endl;
    }
    else
    {
        cout <<"输入错误，请按按[xx.xC]或[xx.xF]的格式"<< endl;
    }

//下部分防止程序一闪而过 小甲鱼多的部分，在.EXE运行时不至于一闪而过
    cout << "请输入任意字符结束程序"<< "\n\n"<<endl;
    cin.get();
    return 0;
}


#else
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
    std::cin.ignore(100, '\n');//对于输入流的前一百的字符内如果存在\n 的话，那么在\n 之前的字符全部忽略掉，

    //cout<<TempIn<<endl; //调试部分
    //cout<<TypeIn<<endl;
    switch (TypeIn)
        {
            case 'C':
            case 'c':
                 TempOut = TempIn * RATIO + ADD_SUBSTRACT;
                 TypeOut = 'F';
                 TempIn = 'C';
                 break; //别忘了结束啊

            case 'F':
            case 'f':
                 TempOut = (TempIn  - ADD_SUBSTRACT) /RATIO;
                 TypeOut = 'C';
                 TempIn = 'F';
                 break; //别忘了结束啊

            default:
                cout<< "输入错误，请按按[xx.xC]或[xx.xF]的格式"<<endl;
                break;
        }

    cout <<"转换后的温度为:" << TempOut<<TypeOut<< "\n\n" << endl;

//模仿小甲鱼加的
    cout << "在运行.exe时防止程序一闪而过，请输入任意字符\n\n"<<endl;
    cin.get();

    return 0;
}

#endif

