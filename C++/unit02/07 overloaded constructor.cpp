#include <iostream.h>
#include <conio.h>
class test
{
	public:
	int width;
	int height;
	test()
	{
		cout<<"\n Default constructor";
		width=0;
		height=0;
	}
	test(int x)
	{
		cout<<"\n constructor with one argument";
		width=x;
		height=x;
	}
	test(int x,int y)
	{
		cout<<"\n constructor with two argument";
		width=x;
		height=y;
	}
	void getdata()
	{
		cout<<"\n width: "<<width;
		cout<<"\n height: "<<height;
	}
};
int main()
{
	clrscr();
	test t;
	test t1(5);
	test t2(10,20);
	t.getdata();
	t1.getdata();
	t2.getdata();
	getch();
	return 0;
}
