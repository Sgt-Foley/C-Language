#include <iostream>
#include <ctime>
using namespace std;
struct student
{
    string name;
    int score;
};
struct teacher
{
    string name;
    student sArray[5];
};
void allocatedata(teacher *tArray, int tlen, int slen);
void printdata(const teacher *tArray, int tlen, int slen);

int main()
{
    srand((unsigned)time(NULL)); // 随机数种子
    int slen = 0, tlen = 0;
    teacher tArray[3];
    slen = sizeof(tArray->sArray) / sizeof(tArray->sArray[0]);
    tlen = sizeof(tArray) / sizeof(tArray[0]);
    allocatedata(tArray, tlen, slen);
    printdata(tArray, tlen, slen);
    return 0;
}

void allocatedata(teacher *tArray, int tlen, int slen)
{
    string NameSeed = "ABCDE"; // 命名字符串
    for (int i = 0; i < tlen; i++)
    {
        tArray[i].name = "teacher_";
        tArray[i].name += NameSeed[i]; // 自动命名

        for (int j = 0; j < slen; j++)
        {
            tArray[i].sArray[j].name = "student_";
            tArray[i].sArray[j].name += NameSeed[j];

            int random = rand() % 61 + 40;
            tArray[i].sArray[j].score = random;
        }
    }
}

void printdata(const teacher *tArray, int tlen, int slen)
{
    for (int i = 0; i < tlen; i++)
    {
        cout << tArray[i].name << endl;

        for (int j = 0; j < slen; j++)
        {
            cout << tArray[i].sArray[j].name << " " << tArray[i].sArray[j].score << endl;
        }
    }
}
