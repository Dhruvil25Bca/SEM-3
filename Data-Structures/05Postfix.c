#include <stdio.h>
//#include <conio.h>
#include <string.h>
#include <stdlib.h>
void push(int[],int*,char);
char nextchar(char*,int*);
char pop(int[],int*);
int precedence(char);
int main()
{
	char input[20];
	char polish[20];
	char next;
	char ch;

	int s[50];
	int *top,*n;
	int i=0,j=0;
	*top=-1;
	*n=-1;
	clrscr();
	printf("\n Enter any Expresssion: ");
	while((ch=getchar())!='\n')
	{
		input[i]=ch;
		i++;
	}
	input[i]='#';
	input[++i]='\0';
	next=nextchar(input,n);
	while(next!='#')
	{
		if((next>='A'&&next<='Z') || (next>='a'&&next<='z')||(next>='0'&&next<='9'))
		{
			polish[j]=next;
			j++;
		}
		else
		{
			if((*top)>-1)
			{
				if(precedence(next)<=precedence(s[(*top)]))
				{
					char ch=pop(s,top);
					polish[j]=ch;
					j++;
					push(s,top,next);
				}
				else
				{
					push(s,top,next);
				}

			}
			else
			{
				push(s,top,next);
			}
		}
		next=nextchar(input,n);
	}
	while((*top)!=-1)
	{
		char ch=pop(s,top);
		polish[j]=ch;
		j++;
	}
	polish[j]='\0';
	printf("\n\n\t postfix form is %s",polish);
	return 0;
}
char nextchar(char *input,int *n)
{
	return input[++(*n)];
}
void push(int s[],int *top,char value)
{
	if((*top+1)>=5)
	{
		printf("\n stack overflow!!");
		return;
	}
	else
	{
		s[++(*top)]=value;
		return;
	}
}
char pop(int s[],int *top)
{
	char temp;
	if((*top)<=-1)
	{
		printf("\n stack underflow");
	}
	else
	{
		temp=s[(*top)];
		(*top)--;
	}
	return temp;
}
int precedence(char c)
{
	int temp;

	switch(c)
	{
		case '+':
		temp=1;
		break;
		case '-':
		temp=1;
		break;
		case '*':
		temp=2;
		break;
		case '/':
		temp=2;
		break;
	}
	return temp;
}
