#include <Iostream>
using namespace std; // 构造函数和析构函数
class Person
{
public:
    Person()
    {
        cout << "Person's constructor call" << endl; // constructor
    }

    ~Person()
    {
        cout << "Person's destructor call" << endl; // destructor
    }

private:
    int m_Age;
};

void func01()
{
    Person p;
}

int main()
{
    func01();
    Person p;
    return 0;
}