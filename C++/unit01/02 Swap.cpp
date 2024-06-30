#include <iostream>
//#include <conio.h>
using namespace std;
int main()
{
    int a, b, t;
    //clrscr();
    cout<<endl<<"enter value of a:";
    cin>>a;
    cout<<endl<<"enter value of b:";
    cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<endl<<"value after swaping";
    cout<<endl<<"value of a:"<<a<<endl<<"value of b:"<<b;
    return 0;
}
