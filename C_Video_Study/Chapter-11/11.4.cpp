#include <iostream>
using namespace std;
// int& funreretlv(;//返回局部变量引用
int &funreretst();

int main() // 引用作函数返回值
{
    // int &ret = funreretlv() // 局部变量存放在栈区，系统自动回收
    int &ret = funreretst();
    cout << "First ret=" << ret << endl;
    funreretst() = 100; // 调用作为左值，改变内存区存放数据
    cout << "Second ret=" << ret << endl;

    return 0;
}

// int& funreretlv()
// {
//     int a=10;
//     return a;
// }

int &funreretst()
{
    static int a = 10; // 静态变量存放在全局区，运行完再回收
    return a;
}