#include <iostream>
using namespace std;
class Cube
{
public:
    void setinfo(int len, int wid, int hei)
    {
        m_L = len;
        m_W = wid;
        m_H = hei;
    }

    void showinfo() // 需要改进
    {
        cout << "length=" << m_L << endl;
        cout << "width=" << m_W << endl;
        cout << "heigh=" << m_H << endl;
    }

    int clacuS() // Square
    {
        return m_L * m_W * 2 + m_L * m_H * 2 + m_W * m_H * 2;
    }

    int clacuV() // Volume
    {
        return m_L * m_W * m_H;
    }

    bool inisSame(Cube &c)
    {
        if (c.clacuV() == clacuV())
            return true;
        return false;
    }

private:
    int m_L; // Length
    int m_W; // Width
    int m_H; // Heigh
};
bool outisSame(Cube &c1, Cube &c2);

int main()
{
    Cube c1;
    Cube c2;
    c1.setinfo(2, 4, 8);
    c2.setinfo(4, 2, 8);
    c1.showinfo();
    cout << "Square=" << c1.clacuS() << endl;
    cout << "Volume=" << c1.clacuV() << endl;

    if (c1.inisSame(c2))
        cout << "in:They are same! " << endl;
    else
        cout << "in:Are you kidding me? " << endl;
    if (outisSame(c1, c2))
        cout << "in:They are same! " << endl;
    else
        cout << "in:Are you kidding me? " << endl;

    return 0;
}

bool outisSame(Cube &c1, Cube &c2)
{
    if (c1.clacuV() == c2.clacuV())
        return true;
    return false;
}