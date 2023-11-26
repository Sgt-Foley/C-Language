#include <iostream>
using namespace std;
void add1();      // 无参无返
void add2(int a); // 有参无返
int add3();       // 无参有反
int add4(int a);  // 有参有反

int main() // 函数样式
{
    int a = 1, b = 2;

    add1();
    add2(a);
    a = add3();
    b = add4(b);
    cout << a << b << endl;

    return 0;
}

void add1()
{
    cout << "add1" << endl;
}

void add2(int a)
{
    cout << a << endl;
}

int add3()
{
    return 10;
}

int add4(int a)
{
    a += 1;
    return a;
}