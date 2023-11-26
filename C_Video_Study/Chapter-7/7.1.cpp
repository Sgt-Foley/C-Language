#include <iostream>
using namespace std;

int main() // 指针定义
{
    int a = 10;
    int *p = &a;

    cout << sizeof(int *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(p) << endl;
    cout << *p << endl;

    return 0;
}