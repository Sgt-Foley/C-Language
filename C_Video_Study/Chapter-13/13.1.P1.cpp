#include <iostream>
using namespace std;
class Student
{
public:            // 权限
                   // 属性和行为统称成员
    string s_Name; // 属性--成员属性 成员变量
    string s_Id;

    void showinfo() // 行为--成员函数 成员方法
    {
        cout << s_Name << " " << s_Id << endl;
    }

    void modifyinfo(string name, string id) // 函数直接访问类参数，传参为外部参数
    {
        s_Name = name;
        s_Id = id;
        cout << "successful!" << endl;
    }
};

int main()
{
    Student s1;
    s1.s_Name = "Jiang";
    s1.s_Id = "2020402824";
    s1.showinfo();
    s1.modifyinfo("Li", "2020402845");
    s1.showinfo();

    return 0;
}