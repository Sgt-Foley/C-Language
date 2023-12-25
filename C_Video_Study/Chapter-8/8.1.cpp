#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
} s3;

int main() // 结构体定义和使用
{
    Student s1;
    s1.name = "Zhang";
    s1.age = 19;
    s1.score = 80;
    Student s2 = {"Wang", 17, 60};
    s3.name = "Liu";
    s3.age = 20;
    s3.score = 70;
    cout << s1.name << " " << s1.age << " " << s1.score << endl;
    return 0;
}