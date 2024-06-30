#include <iostream>
#include <conio.h>
using namespace std;
class A
{
 
public:
     int x;
    void get()
    {
        cout << "\n Enter value of x: ";
        cin >> x;
    }
    void dis()
    {
        cout << "\n value of x: " << x;
    }
};
class B
{
    public:
    int y;
    void get()
    {
        cout << "\n Enter value of y: ";
        cin >> y;
    }
    void dis()
    {
        cout << "\n value of y: " << y;
    }
};

int main()
{
    int temp;
    clrscr();
    A p;
    B q;
    p.get();
    q.get();
    cout << "\n before swaping";
    p.dis();
    q.dis();

    temp = p.x;
    p.x = q.y;
    q.y = temp;
    cout << "\n after swaping";
    p.dis();
    q.dis();
    return 0;
}
