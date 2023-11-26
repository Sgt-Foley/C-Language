#include <iostream>
using namespace std;

int main() // 比较运算符
{
    int a = 2, b = 0;

    cout << (a == b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    // cout << a==b << endl;错误，因为比较运算符是一个整体
    return 0;
}