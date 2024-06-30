#include <iostream>
#include <conio.h>
using namespace std;
void sum();
class test
{
    friend void sum();
    int x;
    public:
    test()
    {
        x=20;
    }
};
class test1
{
    friend void sum();
    int y;
    public:
    test1()
    {
        y=30;
    }
};
void sum()
{
    int ans;
    clrscr();
    test t;
    test1 t1;
    ans=t.x+t1.y;
    cout<<"\n sum of two number: "<<ans;
    getch();
}
int main()
{
    sum();
    return 0;
}
