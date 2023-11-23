#include <iostream>
using namespace std;

int main() // 水仙花数
{
    int num = 100;
    int a = 0, b = 0, c = 0;
    do
    {
        a = num / 100;
        b = num / 10 % 10;
        c = num % 10;
        if (a * a * a + b * b * b + c * c * c == num)
            cout << num << endl;
        num++;
    } while (num < 1000);
}