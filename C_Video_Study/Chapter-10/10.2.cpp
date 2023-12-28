#include <iostream>
using namespace std;
int *func();

int main() // 内存栈区
{
    int *p = func();
    cout << "Fitst *p=" << *p << endl;
    cout << "Second *p=" << *p << endl;
}

int *func()
{
    int a = 10;
    return &a;
}