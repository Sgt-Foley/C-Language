#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};

int main() // 结构体数组
{
    Student Arr[3] = {{"Wang", 17, 60}, {"Liu", 19, 70}, {"Zhang", 20, 80}};
    Arr[0].name = "Jiang";
    Arr[0].age = 21;
    Arr[0].score = 80;

    for (int i = 0; i < sizeof(Arr) / sizeof(Arr[0]); i++)
    {
        cout << Arr[i].name << Arr[i].age << Arr[i].score << endl;
    }

    return 0;
}