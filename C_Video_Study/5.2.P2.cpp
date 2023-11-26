#include <iostream>
using namespace std;

int main() // 元素逆置
{
    int arr[5] = {1, 3, 2, 5, 4};

    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}