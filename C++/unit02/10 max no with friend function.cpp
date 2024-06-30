#include <iostream.h>
#include <conio.h>
int find();
class test
{
	friend int find();
	int x;
	public:
	test()
	{
		cout<<"\n Enter no1: ";
		cin>>x;
	}
};
class test1
{
	friend int find();
	int y;
	public:
	test1()
	{
		cout<<"\n Enter no2: ";
		cin>>y;
	}
};
int find()
{
	test t;
	test1 t1;
	return (t.x>t1.y)?t.x:t1.y;
}
int main()
{
	clrscr();
	cout<<"\n Max number: "<<find();
	getch();
	return 0;
}
