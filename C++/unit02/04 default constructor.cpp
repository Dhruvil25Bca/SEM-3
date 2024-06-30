#include <iostream>
#include <conio.h>
using namespace std;
class add
{
    public:
    int x,y,ans;
    add()
    {
        x=20,y=30;
        ans=x+y;
    }
};
int main()
{
    add a;
    clrscr();
    cout<<"sum: "<<a.ans;
    return 0;
}
