#include <iostream>
using namespace std;

int main() // 多目运算符
{
    int a = 5, b = 2, c = 1;

    c = (a > b ? a : b);
    (a > b ? a : b) = 10;
    cout << a << endl;
    cout << b << endl;
    return 0;
}