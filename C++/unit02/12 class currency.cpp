#include<iostream>
#include<conio.h>
using namespace std;

class currency
{
private:
    int rs,ps;
public:
    void getdata();
    void putdata();
    currency()
    {
    	rs=0;
        ps=0;
    }
    currency(int r,int p)
    {
    	rs=r;
        ps=p;
    }
    ~currency()
    {
    	rs=0;
        ps=0;
    }
    friend currency addcurrency(currency, currency);
};
void currency :: getdata()
{
    cout<<"\n enter rupees: ";
    cin>>rs;
    cout<<"\n enter paisa: ";
    cin>>ps;
}
void currency :: putdata()
{
    cout << "rupees: " << rs<<endl;
    cout << "paisa: " << ps<<endl;
}
currency addcurrency(currency c1, currency c2)
{
    currency c3;
    c3.rs=c1.rs+c2.rs;
    c3.ps=c1.ps+c2.ps;
    return c3;
}
int main()
{
    currency p1;
    currency p2;
    currency p3;
    clrscr();
    p1.getdata();
    p2.getdata();
    p1.putdata();
    p2.putdata();
    p3=addcurrency(p1,p2);
    cout<<"\n addition \n\n";
    p3.putdata();
    getch();
    return 0;
}
