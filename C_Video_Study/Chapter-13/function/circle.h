#pragma once       // 在主函数只允许声明一次
#include "point.h" //运用到另一个类需要声明

class Circle
{
public:
    void setR(int r);
    int getR();
    void setCenter(Point center);
    Point getCenter();

private:
    int m_R;
    Point m_Center;
};