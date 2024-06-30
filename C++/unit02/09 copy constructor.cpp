#include <iostream.h>
#include <conio.h>
//using namespace std;
class box
{
    int width;
public:
    box()
    {
        width = 0;
    }
    box(box &b)
    {
        width = b.width + 5;
    }
    void setwidth(int x)
    {
        width = x;
    }
    void getwidth()
    {
        cout << width << endl;
    }
};
int main()
{
    box b1;
    clrscr();
    b1.setwidth(10);
    box b2 = b1;
    b2.getwidth();
    getch();
    return 0;
}
