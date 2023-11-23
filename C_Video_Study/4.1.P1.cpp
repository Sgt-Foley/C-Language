#include <iostream>
using namespace std;

int main() // 三只小猪
{
    int a = 0, b = 0, c = 0;

    cout << "please press kg third" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << "Pig A is " << a << "kg" << endl;
    cout << "Pig B is " << b << "kg" << endl;
    cout << "Pig C is " << c << "kg" << endl;
    if (a > b)
    {
        if (a > c)
            cout << "A" << endl;
        else
            cout << "C" << endl;
    }
    else
    {
        if (b > c)
            cout << "B" << endl;
        else
            cout << "C" << endl;
    }
    return 0;
}
