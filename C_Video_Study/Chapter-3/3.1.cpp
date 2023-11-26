#include <iostream>
using namespace std;

int main() // 算数运算符
{
    int a = 10, b = 3;

    // 基本运算
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl; // 取余

    // 前置、后置运算
    cout << ++a << "\t" << b++ << endl; // a=11,b=3
    cout << b << endl;                  // b=4

    return 0;
}