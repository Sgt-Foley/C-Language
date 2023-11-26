#include <iostream>
using namespace std;
#include "function\swap.h"

int main() // 指针和函数
{
    int a = 10, b = 20;
    swap(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}