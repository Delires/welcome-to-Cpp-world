/**
转义字符: \t
意义：可以更整齐的输出内容
\t会和前面的内容总共占8个字符，因此可以根据前面字符的大小，自动调节空格的数量，使输出更整齐
**/
#include "iostream"
using namespace std;

int main(void)
{
    cout << "a\thello world" <<endl;
    cout << "aa\thello world" <<endl;
    cout << "aaa\thello world" <<endl;
    cout << "aaaa\thello world" <<endl;  //转义字符\t 可以让输出更整齐
                                         //\t会和前面的内容总共占8个字符，因此可以根据前面字符的大小，自动调节空格的大小
}
