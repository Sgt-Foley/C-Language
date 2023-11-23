#include <iostream>
using namespace std;

int main() // break语句
{
    for (int num = 0; num < 10; num++)
    {
        if (num == 5)
            break;
        cout << num << endl;
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << "*";
            if (j == 5)
                break;
        }
        cout << endl;
    }
    return 0;
}