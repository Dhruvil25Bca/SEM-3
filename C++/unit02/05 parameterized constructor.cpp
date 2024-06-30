#include <iostream>
#include <conio.h>
using namespace std;
class add
{
    public:
    int x,y,ans;
    add(int a,int b)
    {
        ans=a+b;
    }
};
int main()
{
    clrscr();
    add a(20,20);
    cout<<"sum: "<<a.ans;
    return 0;
}
