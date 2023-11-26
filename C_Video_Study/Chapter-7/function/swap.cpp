#include <iostream>
using namespace std;
#include "swap.h"

int swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}