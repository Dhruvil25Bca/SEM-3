#include<stdio.h>
#include<conio.h>
#define size 5

void push();
void display();
void pop();
void peep();
void change();

int top=-1,s[size];

void main()
{
	int c;
	clrscr();
	while(c!=6)
	{

		printf("\n\n 1: push");
		printf("\n 2: display");
		printf("\n 3: pop");
		printf("\n 4: peep");
		printf("\n 5: change");
		printf("\n 6: exit");

		printf("\n Enter choice: ");
		scanf("%d",&c);

		switch(c)
		{
			case 1:
					push();
					break;
			case 2:
					display();
					break;
			case 3:
					pop();
					break;
			case 4:
					peep();
					break;
			case 5:
					change();
					break;
			case 6:
					printf("\n --good bye--");
					break;

			default:
					printf("\n !1 wrong number entered!!");
					break;
		}
	}
	getch();
}

void push()
{
	if(top==size-1)
	{
		printf("\n ovreflow");
	}
	else
	{
		top=top+1;
		printf("\n enter element: ");
		scanf("%d",&s[top]);
	}

}

void pop()
{
	if(top==-1)
	{
		printf("\n !! UNDERFLOW !!");
	}
	else
	{
		printf("\n %d is deleted",s[top]);
		top=top-1;
		s[top+1]=s[top];
	}
}

void peep()
{
	int i;
	if(top==-1)
	{
		printf("\n !! UNDERFLOW !!");
	}
	else
	{
		printf("\n enter the position for peep: ");
		scanf("%d",&i);
		printf("\n peep value: %d",s[top-i+1]);
	}
}

void change()
{
	int i;
	if(top==-1)
	{
		printf("\n !! UNDERFLOW !!");
	}
	else
	{
		printf("\n enter the position for change: ");
		scanf("%d",&i);
		printf("\n Enter New Element: ");
		scanf("%d",&s[top-i+1]);
	}
}

void display()
{
	int i;
	printf("\n\n");
	for(i=top ; i>=0 ; i--)
	{
		printf("\n s[%d]= %d",i,s[i]);
	}
}
