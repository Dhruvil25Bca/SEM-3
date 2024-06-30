#include <iostream>
#include <conio.h>
using namespace std;
class test
{
    int no;
    public:
    void get();
    void dis();
    void inc();
};
void test :: get()
{
    cout<<"enter no: ";
    cin>>no;
}
void test :: inc()
{
    no++;
}
void test :: dis()
{
    cout<<"entered no is "<<no;
}
int main()
{
    clrscr();
    test t;
    t.get();
    t.inc();
    t.dis();
    return 0;
}
