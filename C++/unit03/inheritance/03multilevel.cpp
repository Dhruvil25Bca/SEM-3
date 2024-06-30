//multilevel inheritance
#include <iostream.h>
#include <conio.h>
class B;
class C;
class A
{
	int a1,a2;
	public:
		void getdata()
		{
			cout<<"\n Enter value of a1: ";
			cin>>a1;
			cout<<"\n Enter value of a2: ";
			cin>>a2;
		}
		void putdata()
		{
			cout<<"\n a1: "<<a1<<"\n a2: "<<a2;
		}

};
class B:public A
{
	int b1,b2;
	public:
		void indata()
		{
			cout<<"\n Enter value of b1: ";
			cin>>b1;
			cout<<"\n Enter value of b2: ";
			cin>>b2;
		}
		void outdata()
		{
			cout<<"\n b1: "<<b1<<"\n b2: "<<b2;
		}

};
class C:public B
{
	int c1,c2;
	public:
		void input()
		{
			cout<<"\n Enter value of c1: ";
			cin>>c1;
			cout<<"\n Enter value of c2: ";
			cin>>c2;
		}
		void output()
		{
			cout<<"\n c1: "<<c1<<"\n c2: "<<c2;
		}

};
int main()
{
	C c1;
	clrscr();
	c1.getdata();
	c1.indata();
	c1.input();
	c1.putdata();
	c1.outdata();
	c1.output();
	getch();
	return 0;
}
