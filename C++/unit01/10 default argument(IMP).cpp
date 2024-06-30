#include <iostream>
#include <conio.h>
void area(int x,int y=5);
using namespace std;
int main()
{
    int l;
    clrscr();
    cout<<endl<<"enter value of l:";
    cin>>l;
    area(l);
    return 0;
}
void area(int x,int y)
{
    int ans;
    ans=x*y;
    cout<<endl<<"area of rectangle: "<<ans;
    getch();
}
