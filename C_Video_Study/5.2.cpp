#include <iostream>
using namespace std;

int main() // 一维数组名
{
    int arr[5] = {1, 2, 3};

    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;

    return 0;
}