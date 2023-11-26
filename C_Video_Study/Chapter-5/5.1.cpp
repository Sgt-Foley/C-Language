#include <iostream>
using namespace std;

int main() // 一维数组定义
{
    int arr1[5];
    int arr2[5] = {1, 2, 3};
    int arr3[] = {1, 2, 3};

    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << endl;
        cout << arr2[i] << endl;
        cout << arr3[i] << endl;
    }
    return 0;
}