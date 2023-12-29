#include <iostream>
using namespace std;
void refolfunc(int &a);
void refolfunc(const int &a);

int main() // 引用重载
{
    int a = 10;
    refolfunc(a);  // 可读可写
    refolfunc(10); // 可读不可写

    return 0;
}

void refolfunc(int &a)
{
    cout << "int &a call" << endl;
}

void refolfunc(const int &a)
{
    cout << "const int &a call" << endl;
}