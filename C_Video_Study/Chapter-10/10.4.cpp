#include <iostream>
using namespace std;
int *func();
void fun();
void funA();

int main() // new关键字、delete关键字
{
    fun();
    funA();
    return 0;
}

int *func() // 堆区数据创建
{
    int *p = new int(10);
    return p;
}

void fun() // 堆区数据管理（每个函数均可用）
{
    int *p = func();
    cout << "*p=" << *p << endl;
    delete p; // 释放堆区数据
}

void funA() // 数组创建
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }
}