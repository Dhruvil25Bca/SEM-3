#include <iostream>
#include <conio.h>
using namespace std;
class area
{   
    int l,b,rarea,sarea;
    float r,carea;
    public:
    void get()
    {
    cout<<"\n enter value of l:";
    cin>>l;
    cout<<"\n enter value of b:";
    cin>>b;
    cout<<"\n enter value of r:";
    cin>>r;
    }
    void process()
    {
        sarea=l*l;
        rarea=l*b;
        carea=3.14*r*r;

    }
    void dis()
    {
        cout<<"\n area of square: "<<sarea<<endl;
        cout<<"\n area of rectangle: "<<rarea<<endl;
        cout<<"\n area of circle: "<<carea<<endl;
    }
};
int main()
{
    int i;
    area a[2];
    clrscr();
    for(i=0;i<2;i++)
    {
        a[i].get();
        a[i].process();
        a[i].dis();
    }
    return 0;
}
