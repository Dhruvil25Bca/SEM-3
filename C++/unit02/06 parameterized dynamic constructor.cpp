#include <iostream.h>
#include <conio.h>
#include <string.h>
class my
{
	public:
	char *surname;
	my(char *p)
	{
		int len=strlen(p);
		surname=new char[len+1];
		strcpy(surname,p);
	}
};
int main()
{
	clrscr();
	my obj("sadhu");
	cout<<"\n surname: "<<obj.surname;
	getch();
	return 0;
}
