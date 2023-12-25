#include <iostream>
using namespace std;
#include "System.h"

void showPerson(const Addressbooks *books)
{
    if (books->size == 0)
    {
        cout << "It's empty here!" << endl;
    }
    else
    {
        for (int i = 0; i < books->size; i++)
        {
            cout << "Name:" << books->pArray[i].P_Name << "\t";
            cout << "Sex:" << (books->pArray[i].P_Sex ? "male" : "female") << "\t";
            cout << "Age:" << books->pArray[i].P_Age << "\t";
            cout << "Phone:" << books->pArray[i].P_Phone << "\t";
            cout << "Address:" << books->pArray[i].P_Addr << endl;
        }
    }
    system("pause");
    system("cls");
}