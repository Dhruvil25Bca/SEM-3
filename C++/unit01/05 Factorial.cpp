#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,no,fact=1;
    clrscr();
    cout<<endl<<"enter value of no for factorial:";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        fact=fact*i;
    }
    cout<<endl<<"factorial of "<<no<<" is "<<fact;
    return 0;
}
