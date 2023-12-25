#include <iostream>
using namespace std;
#include "System.h"

void deletePerson(Addressbooks *books)
{
    cout << "input the name you wanna to delete" << endl;
    int position = isExist(books); // 传进来的已经是地址了
    if (position != -1)
    {
        for (int i = position; i < books->size - i - 1; i++)
        {
            books->pArray[i] = books->pArray[i + 1];
        }
        books->size--;
        cout << "Delete Successful" << endl;
    }
    else
    {
        cout << "Are you kidding me?" << endl;
    }
    system("pause");
    system("cls");
}
