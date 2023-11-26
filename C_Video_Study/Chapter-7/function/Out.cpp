#include <iostream>
using namespace std;
#include "Out.h"

void Out(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << *arr++ << endl;
    }
}