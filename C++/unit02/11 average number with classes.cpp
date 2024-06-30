#include <iostream.h>
#include <conio.h>
class B;
class C;
class A
{
	public:
	int n1;
	A()
	{
		cout<<"\n Enter no1: ";
		cin>>n1;
	}
	friend double average(A ,B ,C );
};
class B
{
	public:
	int n2;
	B()
	{
		cout<<"\n Enter no2: ";
		cin>>n2;
	}
	friend double average(A ,B ,C );
};
class C
{
	public:
	int n3;
	C()
	{
		cout<<"\n Enter no3: ";
		cin>>n3;
	}
	friend double average(A ,B ,C );
};
double average(A a2,B b2,C c2)
{
	return ((a2.n1+b2.n2+c2.n3)/3.0);
}
int main()
{
	double ans;
	clrscr();
	A a1;
	B b1;
	C c1;
	ans=average(a1,b1,c1);
	cout<<"\n average of three number: "<<ans;
	getch();
	return 0;

}
