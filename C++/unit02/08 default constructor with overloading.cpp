#include <iostream.h>
#include <conio.h>
//using namespace std;
class add
{
	public:
	int a,b,c;
	add(int x,int y=10)
	{
		int ans;
		ans=x+y;
		cout<<"\n sum of two numbers: "<<ans;
	}
	add(int a,int b,int c)
	{
		a++;
		b++;
		c++;
		cout<<"\n increased a: "<<a;
		cout<<"\n increased b: "<<b;
		cout<<"\n increased c: "<<c;
	}
	void sum(int a,int b,int c)
	{
		int sum;
		sum=a+b+c;
		cout<<"\n sum of three numbers: "<<sum;
	}
};
int main()
{
	clrscr();
	add a0(10);
	add a1(10,20,30);
	a0.sum(10,20,30);
	getch();
	return 0;
}
