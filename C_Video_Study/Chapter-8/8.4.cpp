#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};

struct Teacher
{
    int id;
    string name;
    int age;
    Student stu;
};

int main() // 结构体嵌套
{
    Teacher t1;
    t1.id = 1;
    t1.name = "Jiang";
    t1.age = 60;
    t1.stu.name = "Jiang";
    t1.stu.age = 21;
    t1.stu.score = 80;
    cout << t1.id << t1.name << t1.age << t1.stu.name << endl;

    return 0;
}