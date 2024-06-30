#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int no;
    clrscr();
    cout<<endl<<"enter value of no:";
    cin>>no;
    if(no%2==0)
    {
        cout<<no<<" is even number";
    }
    else
    {
        cout<<no<<" is odd number";
    }
    return 0;
}
