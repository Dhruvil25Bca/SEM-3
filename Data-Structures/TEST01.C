#include <stdio.h>
#include <conio.h>
int main()
{
	int a[100];
	int i, num, pos;
	clrscr();
	printf("\n Enter how many element you want store in array:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("\n Enter the value of a[%d]:", i);
		scanf("%d", &a[i]);
	}
	printf("\n Enter the postion of element you want delete:");
	scanf("%d", &pos);
	if (pos>=num)
	{
		printf("\n you enter wrong value of pos!");
	}
	else
	{
		for (i = pos; i < num - 1; i++) // if you do i=pos-1 is delete an element of array by count not array index position
		{
			a[i] = a[i + 1];
		}
		printf("\n Final array");

		for (i = 0; i < num - 1; i++)
		{
			printf("\n a[%d]=%d", i, a[i]);
		}
	}
	return 0;
}
