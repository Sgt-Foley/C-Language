#include <iostream>
using namespace std;
void fundefpar(int a, int b = 10); // 默认参数：Default Parameters

int main() // 函数默认参数
{
    int a = 10, b = 20;
    fundefpar(a, b);
    fundefpar(a);

    return 0;
}

void fundefpar(int a, int b)
{
    cout << a + b << endl;
}