#include <iostream>
using namespace std;
class Person
{
public: // 公共权限
    string m_Name;
    void showinfo()
    {
        cout << m_Name << endl;
        cout << m_Car << endl;
        cout << m_Password << endl;
    }

protected: // 保护权限
    string m_Car;

private: // 私有权限
    int m_Password;
};

int main() // 访问权限
{
    Person p1;
    p1.m_Name = "Jian";
    // p1.m_Car="Good";
    // p1.m_Password=123;
    p1.showinfo();

    return 0;
}