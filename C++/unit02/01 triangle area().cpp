#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class shape
{
    double width;
    double height;

public:
    void dis()
    {
        cout << "width= " << width << endl
             << "height= " << height;
    }
    // accessor function
    double getwidth()
    {
        return width;
    }
    double getheight()
    {
        return height;
    }
    void setwidth(double w)
    {
        width = w;
    }
    void setheight(double h)
    {
        height = h;
    }
};
class triangle : public shape
{
public:
    char style[20];
    double area()
    {
        return getwidth() * getheight() / 2;
    }
    void showstyle()
    {
        cout << "\n triangle is " << style << endl;
    }
};

int main()
{
    clrscr();
    triangle t1;
    triangle t2;
    t1.setwidth(4.0);
    t1.setheight(4.0);
    strcpy(t1.style, " 0 sceles");
    t2.setwidth(8.0);
    t2.setheight(12.0);
    strcpy(t2.style, "right");
    t1.showstyle();
    t1.dis();
    cout << "\n area is " << t1.area() << endl;
    t2.showstyle();
    t2.dis();
    cout << "\n area is " << t2.area() << endl;
    return 0;
}
