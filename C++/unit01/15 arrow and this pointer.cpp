#include <iostream>
#include <conio.h>
using namespace std;
class myclass
{
    int data;
    public:
    myclass()
    {
        data=100;
    }
    void print1();
    void print2();
};
//not using this pointer
void myclass :: print1()
{
    cout<<data<<endl;
}
//using this pointer
void myclass :: print2()
{
    cout<<"my address= "<<this<<endl;
    cout<<this->data<<endl;
}
int main()
{
    clrscr();
    myclass a;
    a.print1();
    a.print2();
    cout<<sizeof(a)<<endl;
    return 0;
}
