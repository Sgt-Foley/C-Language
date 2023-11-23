#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "please give a score to the movie" << endl;
    cin >> score;
    switch (score)
    {
    case 10:
        cout << "classic" << endl;
        break;
    case 9:
        cout << "classic" << endl;
        break;
    case 8:
        cout << "very good" << endl;
        break;
    case 7:
        cout << "very good" << endl;
        break;
    }
}