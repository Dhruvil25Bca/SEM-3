#include<iostream>
using namespace std;

class test
{
  public:
  
  void print()
  {
  cout<<"hello every,meow";
}
};

int main()
{
    test t;
    test *p;
   
    p=&t;
    p->print();
    return 0;
}
