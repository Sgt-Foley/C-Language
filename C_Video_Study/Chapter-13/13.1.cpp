#include <iostream>
using namespace std;
const double PI = 3.14;
class Circle
{
public:
    int m_r;
    double cirperifunc()
    {
        return 2 * PI * m_r;
    }
};

int main() // 封装的意义
{
    Circle c1;
    c1.m_r = 2;
    cout << c1.cirperifunc() << endl;

    return 0;
}