#include <iostream>
using namespace std;

int main() // 浮点型
{
    float pi1 = 3.1415;
    double pi2 = 3.141592;
    cout << sizeof(pi1) << endl;
    cout << sizeof(pi2) << endl;

    double pi3 = 3e-2;
    cout << pi3 << endl;

    return 0;
}