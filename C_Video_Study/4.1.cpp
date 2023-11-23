#include <iostream>
using namespace std;

int main() // 选择结构
{
    int score = 0;

    cout << "please press score" << endl;
    cin >> score;
    if (score > 600) // 单行if语句
    {
        cout << "you can get level 1 school" << endl;
    }

    if (score > 600) // 多行if语句
    {
        cout << "you can get level 1 school" << endl;
    }
    else
    {
        cout << "you can't get level 1 school" << endl;
    }

    if (score > 600) // 多条件if语句
    {
        cout << "you can get level 1 school" << endl;
    }
    else if (score > 500)
    {
        cout << "you can get level 2 school" << endl;
    }

    if (score > 600) // 嵌套if语句
    {
        if (score > 700)
        {
            cout << "you can get beida school" << endl;
        }
        else if (score > 650)
        {
            cout << "you can get qinghua school" << endl;
        }
        else
        {
            cout << "you can get renda school" << endl;
        }
    }
    else if (score > 500)
    {
        cout << "you can get level 2 school" << endl;
    }
    return 0;
}