#include <iostream>
using namespace std;
struct Hero
{
    string name;
    int age;
    string sex;
};
void BubbleSort(Hero *hArray,int len);
void printdata(Hero *hArray, int len);

    int main()
{
    Hero hArray[5]=
    {
        {"Liubei",23,"male"},
        {"Guanyu",22,"male"},
        {"Zhangfei",20,"male"},
        {"Zhaoyun",21,"male"},
        {"Diaochan",19,"female"},
    };
    int len=sizeof(hArray)/sizeof(hArray[1]);
    BubbleSort(hArray,len);
    printdata(hArray,len);
    return 0;
}

void BubbleSort(Hero* hArray, int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(hArray[j].age>hArray[j+1].age)
            {
                Hero temp=hArray[j+1];
                hArray[j+1]=hArray[j];
                hArray[j]=temp;
            }
        }
    }
}

void printdata(Hero* hArray,int len)
{
    for(int i=0;i<len;i++)
    {
        cout << hArray[i].age << hArray[i].name << hArray[i].sex << endl;
    }
}