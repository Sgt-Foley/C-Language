#include <iostream>
using namespace std;
#include "System.h"

void findPerson(const Addressbooks *books)
{
    cout << "input the name you wanna to find" << endl;
    int position = isExist(books);
    if (position != -1)
    {
        cout << "Name:" << books->pArray[position].P_Name << "\t";
        cout << "Sex:" << (books->pArray[position].P_Sex ? "male" : "female") << "\t";
        cout << "Age:" << books->pArray[position].P_Age << "\t";
        cout << "Phone:" << books->pArray[position].P_Phone << "\t";
        cout << "Address:" << books->pArray[position].P_Addr << endl;
    }
    else
    {
        cout << "Haven't find the person" << endl;
    }
    system("pause");
    system("cls");
}
