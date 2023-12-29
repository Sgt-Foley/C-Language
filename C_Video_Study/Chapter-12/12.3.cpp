#include <iostream>
using namespace std;
void olfunc(int a); // 重载函数overloaded function
void olfunc(int a, int b);
void olfunc(int a, double b);

int main() // 函数重载
{
    olfunc(2);
    olfunc(3, 4);
    olfunc(8, 3.14);

    return 0;
}

void olfunc(int a)
{
    cout << "int a call" << endl;
}

void olfunc(int a, int b)
{
    cout << "int a,int b call" << endl;
}

void olfunc(int a, double b)
{
    cout << "int a,double b call" << endl;
}
