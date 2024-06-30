#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int no;
    clrscr();
    cout<<endl<<"enter value of no:";
    cin>>no;
    if(no>=0)
    {
        if(no>0)
        {
            cout<<endl<<"no is positive";
        }
        else
        {
         cout<<endl<<"no is zero";   
        }
    }
    else
    {
        cout<<endl<<"no is negitive";
    }
    return 0;
}
