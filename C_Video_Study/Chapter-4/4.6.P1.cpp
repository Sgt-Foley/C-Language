#include<iostream>
using namespace std;

int main()
{
    int num=0;
    int a=0,b=0,c=0;
    for(num=1;num<=100;num++)
    {
        a=num/100;
        b=num/10%10;
        c=num%10;
        if(a==7||b==7||c==7)
        cout <<"desk"<< endl;
        else
        cout << num<<endl;
    }
    return 0;
}