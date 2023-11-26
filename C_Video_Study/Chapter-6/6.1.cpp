#include <iostream>
using namespace std;
int add(int a, int b); // 声明

int main() // 函数体
{
    int a = 3, b = 5, c = 0;

    c = add(a, b); // 调用
    cout << c << endl;

    return 0;
}

int add(int a, int b) // 定义
{
    int sum = a + b;
    return sum;
}