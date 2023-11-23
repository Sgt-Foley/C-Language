#include <iostream>
using namespace std;

int main() // 逻辑运算符
{
    int a = 1, b = 0;

    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << !!a << endl;
    cout << (a && (!b)) << endl;
    return 0;
}