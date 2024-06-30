#include <iostream>
#include <conio.h>
using namespace std;
void area(int x,int y);
void area(int x);
void area(float s);
int main()
{
    int l,b;
    float r;
    clrscr();
    cout<<endl<<"enter value of l:";
    cin>>l;
    cout<<endl<<"enter value of b:";
    cin>>b;
    cout<<endl<<"enter value of r:";
    cin>>r;
    area(l,b);
    area(l);
    area(r);
    return 0;
}
void area(int x)
{
    int ans;
    ans=x*x;
    cout<<endl<<"area of squre: "<<ans;
    getch();
}
void area(int x,int y)
{
    int ans;
    ans=x*y;
    cout<<endl<<"area of rectangle: "<<ans;
    getch();
}
void area(float s)
{
    int ans;
    ans=3.14*s*s;
    cout<<endl<<"area of circle: "<<ans;
    getch();
}
