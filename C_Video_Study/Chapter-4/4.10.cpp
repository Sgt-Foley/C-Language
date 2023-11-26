#include <iostream>
using namespace std;

int main() // goto语句
{
    cout << "1" << endl;
    goto FLAG;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
FLAG:
    cout << "5" << endl;
    cout << "6" << endl;
    return 0;
}