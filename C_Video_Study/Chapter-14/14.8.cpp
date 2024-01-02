#include <iostream>
using namespace std; // 静态成员
class Person
{
public:
    static void printage() // 静态函数仅能访问静态成员变量
    {
        cout << m_Age << nedl;
    }

    static string m_Name; // 静态成员所有对象共用

private:
    int m_Age;
};
string Person::m_Name = "Jian";

int main()
{
    Person p;
    cout << p.m_Name << endl;       // 对象访问
    cout << Person::m_Name << endl; // 类名访问
    p.printage();                   // 对象访问
    Person::printage();             // 类名访问

    return 0;
}