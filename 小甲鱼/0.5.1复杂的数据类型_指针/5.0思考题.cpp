#include "iostream"
#include "string"

using namespace std;
#define SIZE 5
int main(void)
{
    int in_arry[ SIZE] = {0, 4, 7, 8, 4};

    int *inPointer = in_arry;



    cout<< *inPointer+1 <<endl;
    cout<< *(inPointer+1) <<endl;

    return 0;
}
