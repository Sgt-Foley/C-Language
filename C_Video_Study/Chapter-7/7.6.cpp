#include <iostream>
using namespace std;
#include "function\BubbleSort.h"
#include "function\Out.h"

int main() // 指针、数组、函数
{
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    Out(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}