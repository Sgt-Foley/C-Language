#include <iostream>
using namespace std; // 浅拷贝和深拷贝

class Person
{
public:
    Person() // 默认构造
    {
        cout << "Person's default constructor call" << endl;
    }

    Person(int age, int height) // 有参构造
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person's parameterized constructor call" << endl;
    }

    ~Person() // 析构函数
    {
        delete m_Height;
        m_Height = NULL;
        cout << "Person's destructor call" << endl;
    }

    Person(const Person &p) // 拷贝构造
    {
        m_Age = p.m_Age;
        // m_Height = p.m_Height; // 编译器默认拷贝构造函数--浅拷贝
        m_Height=new int(*p.m_Height);
        cout << "Person's copy constructor call" << endl;
    }

    int m_Age;
    int *m_Height;
};

int main()
{
    Person p1(18, 173);
    Person p2(p1); // 若为浅拷贝程序在销毁p1后终止
    cout << p1.m_Age << *p1.m_Height<<endl;
    cout << p2.m_Age << *p2.m_Height<<endl;

    return 0;
}