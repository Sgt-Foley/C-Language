#include <iostream>
using namespace std;

int main() // 字符类型，转义字符
{
    char a = 'a', A = 'A';
    int ai = a, Ai = 'A';
    cout << sizeof(char) << endl;
    cout << "A=" << (int)A << "\ta=" << int(a) << endl; // 每个输出需要一个<<，尾部需要一个<<
    cout << "aa\tHello" << endl;
    cout << "aaa\tHello" << endl;
    // char a="a";//常见错误
    // char ab="ab";
    return 0;
}