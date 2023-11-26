#include <iostream>
using namespace std;

int main() // const修饰指针
{
    int a1 = 1, a2 = 2;

    const int *p1 = &a;
    p1 = &a2;
    //*p=2;//错误，不能通过*更改值

    int *const p2 = &a2;
    *p2 = 1;
    // p2=&a1;//错误，p2不能改变

    return 0;
}