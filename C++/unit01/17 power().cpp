#include <iostream>
#include <conio.h>
using namespace std;
int power(int m,int n=2)
{
    int ans=1;
    while(n>0)
    {
        ans=ans*n;
        n--;
    }
    cout<<"\n your ans= "<<ans;
}
int main()
{
    clrscr();
    power(2,4);
    power(12);
    return 0;
}
