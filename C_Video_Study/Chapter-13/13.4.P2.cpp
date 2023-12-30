#include <iostream>
using namespace std;
#include "function/point.h"
#include "function/circle.h"
// class Point
// {
// public:
//     void setX(int x)
//     {
//         m_X = x;
//     }

//     void setY(int y)
//     {
//         m_Y = y;
//     }

//     int getX()
//     {
//         return m_X;
//     }

//     int getY()
//     {
//         return m_Y;
//     }

// private:
//     int m_X;
//     int m_Y;
// };

// class Circle
// {
// public:
//     void setR(int r)
//     {
//         m_R = r;
//     }

//     int getR()
//     {
//         return m_R;
//     }

//     void setCenter(Point center)
//     {
//         m_Center = center;
//     }

//     Point getCenter()
//     {
//         return m_Center;
//     }

// private:
//     int m_R;
//     Point m_Center; // 让另一个类成为成员
// };
void relationship(Circle &c, Point &p);

int main()
{
    Circle c;
    c.setR(5);
    Point center;
    center.setX(0);
    center.setY(0);
    c.setCenter(center);

    Point p;
    p.setX(3);
    p.setY(4);

    relationship(c, p);

    return 0;
}

void relationship(Circle &c, Point &p)
{
    int pdistance =
        (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    int rdistance = c.getR() * c.getR();

    if (pdistance == 0)
    {
        cout << "center" << endl;
    }
    if (pdistance == rdistance)
    {
        cout << "under" << endl;
    }
    else if (pdistance > rdistance)
    {
        cout << "out" << endl;
    }
    else
    {
        cout << "in" << endl;
    }
}