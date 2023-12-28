#include <iostream>
using namespace std;
void swapval(int a, int b);
void swapaddr(int *a, int *b);
void swapref(int &a, int &b);

int main() // 函数参数传递
{
    int a = 10, b = 20;
    swapval(a, b);
    cout << "swapval a=" << a << " b=" << b << endl;
    swapaddr(&a, &b);
    cout << "swapaddr a=" << a << " b=" << b << endl;
    swapref(a, b); // 编译器自动添加地址
    cout << "swapref a=" << a << " b=" << b << endl;

    return 0;
}

void swapval(int a, int b) // 值传递
{
    int temp = a;
    a = b;
    b = temp;
}

void swapaddr(int *a, int *b) // 地址传递
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapref(int &a, int &b) // 引用传递
{
    int temp = a;
    a = b;
    b = temp;
}