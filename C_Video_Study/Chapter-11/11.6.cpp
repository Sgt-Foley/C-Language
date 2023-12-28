#include <iostream>
using namespace std;
void funconref(const int &a);       // 常量引用
void funconpoi(const int *const a); // 本质

int main() // 常量引用
{
    int a = 10;
    funconref(a);
    // 引用需要合法的地址（本质是指针）
    int &b = 10;
    const int &b = 10;
    // 引用过程
    int temp = 10;
    const int &ref = temp;
    const int *const ref=temp;

    cout << "main a=" << a << endl;

    return 0;
}

void funconref(const int &a)
{
    // a = 100; // const常量引用类型无法通过引用修改
    cout << "funconref a=" << a << endl;
}

void funconpoi(const int *const a)
{
    // a = 100; // const指针类型无法通过指针修改
    cout << "funconpoi a=" << a << endl;
}