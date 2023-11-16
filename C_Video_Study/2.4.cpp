#include <iostream>
#include <string>
using namespace std;

int main() // 字符串，布尔类型
{
    char ch1[] = "abcd";
    string ch2 = "abcd";
    bool bo1 = true, bo2 = false;
    cout << ch1 << endl; // 输出不需要带[]
    cout << ch2 << endl;
    cout << (int)bo1 << "\t" << (int)bo2 << endl; // 转义字符需要""

    return 0;
}