#include <iostream>
#include <conio.h>
using namespace std;
class test1;
class test
{
    friend class test1;
    int x;
    public:
    test()
    {
        x=10;
    }

};
class test1
{
    int y;
    public:
    test1()
    {
        y=20;
    }
   int sum()
    {
        test t;
      return t.x+y;
    }
};
int main()
{
    test1 t1;
    cout<<"sum: "<<t1.sum();
    return 0;
}
