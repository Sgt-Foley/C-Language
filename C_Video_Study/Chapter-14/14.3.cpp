#include <iostream>
using namespace std; // 构造函数调用时机

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
void cpcons01(Person p);
Person cpcons02();

void func01() // 旧对象初始化新对象
{
    Person p1;
    Person p2(p1);
}

void func02() // 值传递给函数参数传值
{
    Person p;
    cpcons01(p);
}

void cpcons01(Person p)
{
}

void func03() // 值返回局部对象
{
    Person p = cpcons02();
    cout << &p << endl;
}

Person cpcons02()
{
    Person p;
    cout << &p << endl;
    return p;
}

int main()
{
    // func01();
    // func02();
    // func03();

    return 0;
}