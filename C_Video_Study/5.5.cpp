#include <iostream>
using namespace std;

int main() // 二维数组名
{
    int arr[2][3] = {{2, 4, 1}, {5, 7, 6}};

    cout << sizeof(arr) << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1][0] << endl;

    return 0;
}