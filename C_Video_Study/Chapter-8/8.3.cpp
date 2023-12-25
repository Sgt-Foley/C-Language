#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};

int main() // 结构体指针
{
    Student s1 = {"Zhang", 19, 70};
    Student *p = &s1;

    p->name = "Jiang";
    p->score = 80;
    cout << p->name << p->score;

    return 0;
}