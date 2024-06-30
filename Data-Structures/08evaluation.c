#include <stdio.h>  
#include <stdlib.h>
#include <conio.h>
#define size 100
int s[size];
int top=-1;
void push(int item)
{
	top++;
	s[top] = item;
}
int pop()
{
	int item;
	item = s[top];
	top--;
	return item;
}
int evaluate(char* exp)
{
	int i = 0;
	char symbol = exp[i];
	int n1,n2,result;

	while(symbol != '\0')
	{
		if(symbol >= '0' && symbol <= '9')
		{
			int num = symbol - '0';
			push(num);
		}
		else if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
		{
			n2 = pop();
			n1 = pop();
			switch(symbol)
			{
				case '+':
						result = n1 + n2;
						break;
				case '-':
						result = n1 - n2;
						break;
				case '*':
						result = n1 * n2;
						break;
				case '/':
						result = n1 / n2;
						break;
			}
			push(result);
		}
		i++;
		symbol = exp[i];
	}
	result = pop();
	return result;
}

int main()
{
	char exp[100];
	int result;
	clrscr();
	printf("\n enter postfix expression: ");
	scanf("%s",exp);
	result= evaluate(exp);
	printf("Result= %d\n", result);
	getch();
	return 0;
}
