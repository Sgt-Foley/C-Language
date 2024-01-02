#include <iostream>
using namespace std; // 类对象作为类成员
class Phone
{
public:
    Phone() // 默认构造
    {
        cout << "Phone's default constructor call" << endl;
    }

    Phone(int number) // 有参构造
    {
        m_Number = number;
        cout << "Phone's parameterized constructor call" << endl;
    }

    ~Phone() // 析构函数
    {
        cout << "Phone's destructor call" << endl;
    }

    Phone(const Phone &p) // 拷贝构造
    {
        cout << "Phone's copy constructor call" << endl;
    }

    int m_Number;
};

class Person
{
public:
    Person() // 默认构造
    {
        cout << "Person's default constructor call" << endl;
    }

    Person(string name, int number) : m_Name(name), m_Phone(number) // 有参构造
    {
        cout << "Person's parameterized constructor call" << endl;
    }

    ~Person() // 析构函数
    {
        cout << "Person's destructor call" << endl;
    }

    Person(const Person &p) // 拷贝构造
    {
        cout << "Person's copy constructor call" << endl;
    }

    string m_Name;
    Phone m_Phone;
};

void func01()
{
    Person p1("Jian", 1234);
    cout << p1.m_Name << "  " << p1.m_Phone.m_Number << endl;
}

int main()
{
    func01();

    return 0;
}