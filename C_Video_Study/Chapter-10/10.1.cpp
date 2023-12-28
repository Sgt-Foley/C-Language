#include <iostream>
using namespace std;
int A = 10;       // 全局变量
const int B = 12; // 全局常量

int main() // 全局区
{
    int a = 10;                // 局部变量
    const int b = 12;          // 局部常量
    static int c = 13;         // 静态变量
    string HW = "hello world"; // 字符串常量
    cout << "int &a=" << &a << endl;
    cout << "const int &b=" << &b << endl;
    cout << "static int &c=" << &c << endl;
    cout << "string &HW=" << &HW << endl;
    cout << "int &A=" << &A << endl;
    cout << "const int &B=" << &B << endl;
    return 0;
}