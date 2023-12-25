#include <iostream>
using namespace std;
struct student
{
    int age;
    int score;
};
void printstudentp(const student *s);

int main() // const使用场景
{
    student s;
    s.age = 18;
    s.score = 80;
    printstudentp(&s);
    return 0;
}

void printstudentp(const student *s)
{
    // s->age=90;//不能通过指针修改
    cout << s->age << " " << s->score << endl;
}