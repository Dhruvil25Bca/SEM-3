#include <iostream>
#include <conio.h>
using namespace std;
inline int cube(int a)
{
    return (a*a*a);
}
int main()
{   
    int c,d;
    clrscr();
    c=cube(4);
    d=cube(3+5);
    cout<<"value of c= "<<c<<endl;
    cout<<"value of d= "<<d<<endl;
    return 0;
}
