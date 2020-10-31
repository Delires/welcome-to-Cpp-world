/**
根据C++的字符串string对象来实现以下的一些对象的动作
     字符串名直接用string定义
     要有头文件"string"
     直接复制是string str("xxx");  xxx是赋值的内容

1.提取子字符串： str.substr(5);提取字符串第五个字符一直到结束， 字符串元素从0开始
                  str.substr(5，3);提取字符串从五个字符向后数3个
2.比较字符串：将提取出来的子字符串，赋值给别的字符串比较就行了
3.添加字符串：str.append(temp) 把字符串temp添加给字符串str
4.搜索字符串：str.find(temp) 搜索str字符串里有没有temp
**/
#include "iostream" //此类包含输入/输出流对象
#include "string"

using namespace std;

int main(void)
{
    string str("I love meng di. I want to became a strong man");
    string str_1, str_2, str_3;


/******************** 提取子字符串str.substr ********************/
    cout<< "提取字符串操作:" << endl;
    str_1 = str.substr(0,6); //字符串元素从0开始. 提取6个数
    str_2 = str.substr(7,4); //from 7th character, abstract 4 characters.
    cout<< str_1 << endl;
    cout<< str_2 << endl;
    cout<< "\n\n" << endl;


/******************** 比较字符串， 直接把提取的字符串比较即可********************/
//字符串的比较是逐个比较ASCII码，按顺序，哪个先大就直接胜出。要每个字符ascii都一样大就比长短
    cout<< "比较字符串操作:" << endl;
    if(str_1 > str_2)
    {
        cout<< str_1 <<">" << str_2<< endl;
    }
    else
    {
        cout<< str_1 <<"<" << str_2<< endl;
    }
    cout<< "\n\n" << endl;


/********************添加字符串：str.append(temp) 把字符串temp添加给字符串str**********/
// cin.getline(m,5);  接收5个字符到m中，其中最后一个为'\0'，所以只看到4个字符输出.
//cin.getline() 和 getline()是不同的
    cout<< "添加字符串操作:" << endl;
 //从输入获得一个字符串
    char str_add[100] = "\n";
    cin.getline(str_add, 100); //接收100个输入给str_add，空格也行。不够100个就输入多少显示多少个
    cout<< "添加的字符串为："<<str_add << endl;
    cout<< "添加后的字符串为："<<str.append(str_add)<<endl;
    cout<< "\n\n" << endl;


/********************搜索字符串：str.find(temp) 搜索str字符串里有没有temp, 没找到函数返回-1(string::npos),找到返回字符串首元素的位置 **********/
//用getline(cin, str)来添加字符串
    cout<< "搜索字符串操作:" << endl;
    cout<< "请输入要搜素的字符串:" << endl;
    string str_sear;

    //str="\n";//如果先使用cin.getline后用getline()要加上这句，将回车符作为输入流cin以清除缓存，如果不这样做的话，在控制台上就不会出现getline()的输入提示，而直接跳过，因为程序默认地将之前的变量作为输入流。
    //getline(cin,mystr);

    getline(cin, str_sear);
    cout<< str_sear<<endl;
    int num;
    if( str.find(str_sear) != string::npos)
    {
        cout << "字符串存在,在数组的第" << str.find(str_sear)<< "元素开始" << endl;
    }
    else
    {
        cout << "字符串不存在" << endl;
    }
    cout<< "\n\n" << endl;


//防止在exe运行，程序一闪而过
    cout << "输入任意字符结束程序"<<endl;
    cin.get();
    return 0;

}

/**
string str
1.提取字符串str.substr(a,b); //从字符串str的第a个元素开始提取b个元素
2.比较字符串操作，直接比。比的原则是，逐个元素比ascii码，谁先大谁胜出
3.获取字符串 cin.getline(str1, number); //给字符串str1获取number-1个字符串，最后一个是\0
              getline(cin, str1); //把输入流cin的值给str1
4.添加字符串 str.append(temp);   //把temp添加到str后
5.搜索字符串 str.find(temp);     //搜索str里有没有temp，temp变量要提前赋值。若没有返回值==string::npos (即-1)
6.写完毕，要添加cin.get()        //别让console控制台一闪而过

str="\n";//如果先使用cin系列后用getline()要加上这句，将回车符作为输入流cin以清除缓存，如果不这样做的话，在控制台上就不会出现getline()的输入提示，而直接跳过，因为程序默认地将之前的变量作为输入流。
getline(cin,mystr);
**/
