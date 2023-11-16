#include <iostream>
using namespace std;

int main()//整型变量，sizeof用法
{
    cout << sizeof(short) << endl;     // 2
    cout << sizeof(int) << endl;       // 4
    cout << sizeof(long) << endl;      // 4(随系统位数改变)
    cout << sizeof(long long) << endl; // 8

    return 0;
}