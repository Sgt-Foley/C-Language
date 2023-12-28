#include <iostream>
using namespace std;

int main() // 引用基本语法
{
    int a = 10;
    int &b = a;
    cout << "b=" << b << endl;
    b = 20;
    cout << "a=" << a << endl;

    return 0;
}