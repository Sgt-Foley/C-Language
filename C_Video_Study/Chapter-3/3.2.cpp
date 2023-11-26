#include <iostream>
using namespace std;

int main() // 赋值运算符
{
    int a = 2, b = 3;

    a += b;
    a -= b;
    a *= b;
    a %= b;
    cout << a << endl;
    cout << (a += 1) << endl;
    // cout << a+=2 << endl; 错误，a+=2是一个整体不相互独立

    return 0;
}