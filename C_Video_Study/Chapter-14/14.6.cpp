#include <iostream>
using namespace std; // 初始化列表

class Person
{
public:
    Person(int age, string name) : m_Age(age), m_Name(name)
    {
    }

    int m_Age;
    string m_Name;
};

int main()
{
    Person p1(22, "Jian");
    cout << p1.m_Age << "  " << p1.m_Name << endl;

    return 0;
}