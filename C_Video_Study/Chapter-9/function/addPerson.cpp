#include <iostream>
using namespace std;
#include "System.h"

void addPerson(Addressbooks *books)
{
    if (books->size == MAX)
    {
        cout << "Full" << endl;
        return;
    }
    else
    {
        string name;
        cout << "input name" << endl;
        cin >> name;
        books->pArray[books->size].P_Name = name;

        int sex = 0;
        cout << "input sex (1-male 2-female)" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                books->pArray[books->size].P_Sex = sex;
                break;
            }
            cout << "unfair input" << endl;
        }
        int age;
        cout << "input age" << endl;
        cin >> age;
        books->pArray[books->size].P_Age = age;

        string phone;
        cout << "input phone" << endl;
        cin >> phone;
        books->pArray[books->size].P_Phone = phone;

        string addr;
        cout << "input addr" << endl;
        cin >> addr;
        books->pArray[books->size].P_Addr = addr;

        books->size++; // 更新通讯录人数
        cout << "Successful!" << endl;

        system("pause"); // 继续操作
        system("cls");   // 清屏操作
    }
}