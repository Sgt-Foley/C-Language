#include <iostream>
using namespace std;
#include "System.h"

void modifyPerson(Addressbooks *books)
{
    cout << "input the name of a person you wanna modify" << endl;
    int position = isExist(books);
    if (position != -1)
    {
        string name;
        cout << "input name" << endl;
        cin >> name;
        books->pArray[position].P_Name = name;

        int sex = 0;
        cout << "input sex (1-male 2-female)" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                books->pArray[position].P_Sex = sex;
                break;
            }
            cout << "Are you kidding me?" << endl;
        }
        int age;
        cout << "input age" << endl;
        cin >> age;
        books->pArray[position].P_Age = age;

        string phone;
        cout << "input phone" << endl;
        cin >> phone;
        books->pArray[position].P_Phone = phone;

        string addr;
        cout << "input addr" << endl;
        cin >> addr;
        books->pArray[position].P_Addr = addr;

        cout << "Modify Successful!" << endl;
    }
    else
    {
        cout << "Haven't find the person" << endl;
    }
    system("pause");
    system("cls");
}
