#include <iostream>
using namespace std;
class Person
{
public:
    void showname()
    {
        cout << m_Name << endl;
    }

    void setname(string name)
    {
        m_Name = name;
    }

    void showage()
    {
        int m_Age = 22;
        cout << m_Age << endl;
    }

    void setlover(string lover)
    {
        m_Lover = lover;
    }

private:
    string m_Name;  // 可读可写
    int m_Age;      // 只读
    string m_Lover; // 只写
};

int main() // 成员属性私有化
{
    Person Jian;
    Jian.setname("JYX");
    Jian.showname();
    Jian.showage();
    Jian.setlover("Ax");

    return 0;
}