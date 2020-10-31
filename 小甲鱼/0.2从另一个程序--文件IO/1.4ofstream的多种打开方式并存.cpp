/**
ios::in  ios::out  同时让一个文件可读可写
先把字符串流入到IO文件
在把IO文件内容流入到str字符串
**/

#include "iostream"
#include "fstream"

using namespace std;

int main()
{
    fstream IO; //原来都是ofstream/ifstream  但这次又读又写 只能用总的类fstream
    static char str[50];

    IO.open( "test.txt", ios::in | ios::out ); //和单片机一样 ios::in  = 0x01 =01b  ios::out==0x02 ==10b
                                             //不同命令占不同位，因此|操作互不影响
                                            //以in和out两种方式同时打开文件
    if( !IO )
    {
        cout << "打不开 爆炸" << endl;
        return 0;
    }

    IO<<"LLLLLLLLLLLLLQQQ"; //输入文字到IO  IO指向test.txt"

    IO.seekg(ios::beg); //使得光标指向文件头 类似FATFS的f_leek(),   ios::end是指向文件尾

    IO >> str;    //再让文件内容流向字符串
    cout << str <<endl;  //字符串打印出来

    IO.close(); //擦屁股

    return 0;

}
