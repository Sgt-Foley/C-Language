#include <iostream>
using namespace std;
#include "System.h"

void cleanPerson(Addressbooks *books)
{
    string mes;
    cout << "Are you sure about this?" << endl;
    cout << "Input Y / N" << endl;
    cin >> mes;
    if (mes == "Y")
    {
        books->size = 0;
        cout << "Clean Successful!" << endl;
    }
    system("pause");
    system("cls");
}