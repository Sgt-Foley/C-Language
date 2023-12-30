#include <iostream>
using namespace std;
class P1 // 默认私有权限
{
    string m_Name;
};

struct P2 // 默认公共权限
{
    string m_Name;
}

int
main() // class、struct区别
{
    P1 p1;
    P2 p2;
    // p1.m_Name="Jian";
    p2.m_Name = "Jian";

    return 0;
}