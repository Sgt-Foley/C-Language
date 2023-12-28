#include <iostream>
using namespace std;
int *func();

int main() // 内存堆区
{
    int *p = func(); // 说明指针也保存在栈区
    cout << "*p=" << *p << endl;
    return 0;
}

int *func()
{
    int *p = new int(10); // 栈区指针保存堆区数据
    return p;
}