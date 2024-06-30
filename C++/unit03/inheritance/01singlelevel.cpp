//single level inheritance
#include <iostream.h>
#include <conio.h>
class A
{
	public:
		void dis1()
		{
			cout<<"\n A";
		}
};
class B:public A
{
	public:
		void dis2()
		{
			cout<<"\n B";
		}
};
int main()
{
	clrscr();
	B b1;
	b1.dis1();
	b1.dis2();
	getch();
	return 0;
}
