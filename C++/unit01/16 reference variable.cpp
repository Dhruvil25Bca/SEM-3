#include <iostream>
#include <conio.h>
using namespace std;
int &min(int &x,int &y);
int main()
{
    int x=5,y=10;
    clrscr();
    cout<<endl<<x<<"\t \t"<<y;
    min(x,y);
    cout<<endl<<x<<"\t \t"<<y;
    return 0;
}
int &min(int &x,int &y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
