#include <iostream>
using namespace std;

int main() // 引用注意事项
{
    int a = 10;
    // int &b;//引用必须初始化
    int &b = a;
    int c = 20;
    b = c; // 赋值操作，将c的值赋给别名b
    cout << "a=" << a << endl;

    return 0;
}