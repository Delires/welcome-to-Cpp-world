/**
指针的自加 不是单纯＋1  而是+sizeof(type)
 reinterpret_cast<type>(变量)   把变量强制转换为type类型
**/
#include "iostream"
#include "string"

using namespace std;
#define SIZE 5
int main(void)
{
    int in_arry[ SIZE] = {0, 1, 2, 3, 4};
    char ch_arry[ SIZE] = {'A', 'B', 'C', 'D', 'E'}; //字符串数组  要和字符串 有所区别

    int *inPointer = in_arry;
    char *chPointer = ch_arry;

    for(int i=0; i<SIZE; i++)
    {
        cout<< *inPointer<< "  at  "<< inPointer << endl;//inPointer是地址值啊
        inPointer++;
    }
    cout<< "由此可见int型占4个字节，因此地址每次增加4位"<<endl;

    cout<< "\n\n"<<endl;

    for(int i=0; i<SIZE; i++)
    {
        cout<< *chPointer<< "  at  "<< chPointer << endl;
        chPointer++;                                          //chPointer是地址值啊
    }
    cout<< "char型占1个字节，因此地址每次增加1位"<<endl;

    cout<< "\r\n由此可见计算机是先存储char 再存储int的"<<endl;
    cout<< "\r\n不加这个 reinterpret_cast<int *> 的话。cout输出的就不是字符串数组地址而是字符串数组变量值呢？"<<endl;
 /**原因如下：字符数字的名字就是地址，反过来如果输出一个字符的地址就会当做字符数组输出
    对于C++编译器而言，数组的名字同时有两层涵义，一是数组在内存的首地址，二就是数组名字。
    当我们的指令形如：cout<<数组名的时候，编译器就面临一个选择：人类到底是想输出数组内容呢？
    还是输出元素地址呢？最后它根据概率统计，会自作聪明地认为我们大部分时候是想(从当前指针位置开始)
    输出数组的内容，而不是当前元素的地址。所以说，这纯粹是编译器为了秀自己AI而搞出来的小麻烦，是
    它太想模拟人类的思维习惯了:lol:因此，必须用一个强制转换格式符来明确告诉编译器，我这里需要输出
    的是当前元素的地址。
**/



    return 0;

}

