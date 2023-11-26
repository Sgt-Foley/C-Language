#include <iostream>
using namespace std;

int main() // 指针和数组
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    cout << ++*p << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *p++ << endl;
    }

    return 0;
}