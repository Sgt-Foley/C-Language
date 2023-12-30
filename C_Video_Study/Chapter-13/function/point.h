#pragma once // 主程序只声明一次
class Point  // 头文件保留声明
{
public:
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();

private:
    int m_X;
    int m_Y;
};