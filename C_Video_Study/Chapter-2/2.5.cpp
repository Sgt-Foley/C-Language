#include <iostream>
using namespace std;

int main() // 数据输入
{
    int a = 0;
    char ch = 'a';
    string lh = "abcd";
    bool bo = true;
    cout << "please input int" << endl;
    cin >> a;
    cout << "please input char" << endl;
    cin >> ch;
    cout << "please input string" << endl;
    cin >> lh;
    cout << "please input bool" << endl;
    cin >> bo;
    cout << a << endl
         << ch << endl
         << lh << endl
         << bo << endl;

    return 0;
}