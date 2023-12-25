#include <iostream>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};
void printstudentf(student s);
void printstudentp(student *s);

int main() // 结构体函数传递
{
    student s;
    s.name = "Jiang";
    s.age = 20;
    s.score = 80;
    printstudentf(s);
    printstudentp(&s);
    return 0;
}

void printstudentf(student s)
{
    cout << s.name << " " << s.age << endl;
}

void printstudentp(student *s)
{
    cout << s->name << " " << s->age << endl;
}