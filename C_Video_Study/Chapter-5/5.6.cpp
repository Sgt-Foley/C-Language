#include <iostream>
using namespace std;

int main() // 二维数组应用
{
    int arr[3][3] = {{100, 100, 100}, {90, 50, 100}, {60, 70, 80}};

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;//for内层对外层的变量屏蔽，因此sum需要在外层定义
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    
    return 0;
}