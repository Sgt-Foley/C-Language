#include <iostream>
using namespace std;

#define Day 7 // 宏常量，注：不需要";"

int main()
{
    const int month = 12; // const修饰变量
    cout << "1 week has " << Day << " days" << endl;
    cout << "1 year has " << month << " months" << endl;
    return 0;
}