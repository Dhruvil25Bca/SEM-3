#include <iostream>
#include <conio.h>
void area(int x,int y);
using namespace std;
int main()
{
    int l,b;
    clrscr();
    cout<<endl<<"enter value of l:";
    cin>>l;
    cout<<endl<<"enter value of b:";
    cin>>b;
    area(l,b);
    return 0;
}
void area(int x,int y)
{
    int ans;

    ans=x*y;
    cout<<endl<<"area of rectangle: "<<ans;
    getch();
}
