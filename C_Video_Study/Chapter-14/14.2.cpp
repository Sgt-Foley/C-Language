#include <iostream>
using namespace std; // 构造函数分类和调用
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

void func01() // 括号法
{
    Person p1; // 默认构造（不要加()否则会被认为为函数）
    Person p2(10);//有参构造
    Person p3(p2);//拷贝构造
}

void func02() // 显示法
{
    Person p1;
    Person p2=Person(10);
    Person p3=Person(p2);
    Person(10);//匿名对象，没有名字的对象，执行结束立马回收（析构函数）
    // Person (p3);//不能用拷贝构造函数 初始化匿名对象 会认为这是对象声明
}

void func03()//隐式转换法
{
    Person p1;
    Person p2=10;
    Person p3=p2;
}

int main()
{
    // func01();
    // func02();
    func03();
    return 0;
}
