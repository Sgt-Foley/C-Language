#include <iostream>
using namespace std;
#include "point.h" //执行文件保留函数定义，注意需要作用域

void Point::setX(int x)
{
    m_X = x;
}

void Point::setY(int y)
{
    m_Y = y;
}

int Point::getX()
{
    return m_X;
}

int Point::getY()
{
    return m_Y;
}
