#include <iostream>
using namespace std;

int main() // 引用本质
{
    // 引用语法
    int a = 10;
    int &b = a;
    b = 100;
    cout << "refprint=" << b << endl;

    // 指针语法
    int c = 10;
    int *const d = &c;
    *d = 100;
    cout << "poiprint=" << *d << endl;

    return 0;
}