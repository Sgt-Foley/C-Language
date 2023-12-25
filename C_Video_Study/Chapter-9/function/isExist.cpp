#include <iostream>
using namespace std;
#include "System.h"

int isExist(const Addressbooks *books)
{
    string name;
    cin >> name;
    for (int i = 0; i < books->size; i++)
    {
        if (name == books->pArray[i].P_Name)
        {
            return i;
        }
    }
    return -1;
}