#include <iostream>
using namespace std;
void phparfun(int a, int); // 占位参数Placeholder Parameter

int main() // 函数占位参数
{
    int a = 10, b = 20;
    phparfun(a, b);

    return 0;
}

void phparfun(int a, int)
{
    cout << a << endl;
}