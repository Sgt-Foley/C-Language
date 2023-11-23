#include <iostream>
#include <ctime>
using namespace std;

int main() // 猜数字
{
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int val = 0;

    cout << "press a num" << endl;
    cin >> val;
    while (num != val)
    {
        if (val > num)
            cout << "Too big" << endl;
        else
            cout << "Too small" << endl;
        cin >> val;
    }
    cout << "you are win" << endl;
    return 0;
}