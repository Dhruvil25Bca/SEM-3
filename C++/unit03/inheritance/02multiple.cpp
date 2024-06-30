//multiple inheritance
#include <iostream.h>
#include <conio.h>
class N;
class P;
class M
{
	protected:int m;
	public:
		void get_m(int);

};
class N
{
	protected:int n;
	public:
		void get_n(int);

};
class P:public M,public N
{
	public:void dis(void);
};
void M :: get_m(int x)
{
	m=x;
}
void N :: get_n(int y)
{
	n=y;
}
void P :: dis(void)
{
	cout<<"\n m: "<<m;
	cout<<"\n n: "<<n;
	cout<<"\n m * n: "<<m*n;
}
int main()
{
	P p1;
	clrscr();
	p1.get_m(10);
	p1.get_n(20);
	p1.dis();
	getch();
	return 0;
}
