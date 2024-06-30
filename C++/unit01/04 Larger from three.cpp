#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int no1,no2,no3;
    clrscr();
    cout<<endl<<"enter value of no1:";
    cin>>no1;
    cout<<endl<<"enter value of no2:";
    cin>>no2;
    cout<<endl<<"enter value of no3:";
    cin>>no3;
    if(no1>=no2)
    {
        if(no1>=no3)
        {
            cout<<"no1 "<<no1<<" is larger number";
        }
        else
        {
            cout<<"no3 "<<no3<<" is larger number";
        }
    }
    else
    {
        if(no2>=no3)
        {
            cout<<"no2 "<<no2<<" is larger number";
        }
        else
        {
            cout<<"no3 "<<no3<<" is larger number";
        }
    }
    return 0;
}
