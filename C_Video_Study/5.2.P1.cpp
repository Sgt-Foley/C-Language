#include <iostream>
using namespace std;

int main() // 最重的猪
{
    int arr[5] = {300, 350, 200, 400, 250};

    for (int i = 0; i < 5 - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            arr[i + 1] = arr[i];
    }
    cout << arr[4] << endl;
}