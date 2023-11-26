#include <iostream>
using namespace std;

int main() // 二维数组定义
{
    int arr1[2][3];
    int arr2[2][3] = {{2, 4, 1}, {5, 7, 6}};
    int arr3[2][3] = {2, 4, 1, 5, 7, 6};
    int arr4[][3] = {2, 4, 1, 5, 7, 6};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
            cout << arr2[i][j] << " ";
            cout << arr3[i][j] << " ";
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}