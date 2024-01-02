#include <iostream>
using namespace std; // 构造函数调用规则

class Person
{
public:
    Person() // 默认构造
    {
        cout << "Person's default constructor call" << endl;
    }

    Person(int age) // 有参构造
    {
        m_Age = age;
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

    int m_Age;
};

void func01() // 定义有参构造
{
    Person p; // 未定义默认构造 无法使用
    Person p1(10);
    Person p2(p1); // 系统自动定义拷贝构造
}

void func02() // 定义拷贝构造
{
    Person p;      // 未定义默认构造 无法使用
    Person p1(10); // 未定义有参构造 无法使用
    Person p2(p1);
}

int main()
{
    // func01();
    // func02();

    return 0;
}