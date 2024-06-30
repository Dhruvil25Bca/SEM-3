#include <stdio.h>
#include <conio.h>
int main()
{
	int i, a[50], val, pos,num,found=0; // max size of array is 50
	clrscr();
	printf("how many element you want to store in array:");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		printf("\n Enter element of a[%d]:", i);
		scanf("%d", &a[i]);
	}
	printf("\n Enter value you want to delete:");
	scanf("%d", &val);
	for (i = 0; i < num; i++)
	{
		if (a[i] == val)
		{
			found=1;
			pos = i;
			break;
		}
	}
	if (found == 1)
	{
		for (i = pos; i < num - 1; i++)
		{
			a[i] = a[i + 1];
		}
		printf("\n Final array");
		for (i = 0; i < num - 1; i++)
		{
			printf("\n a[%d]=%d", i, a[i]);
		}	}
	else
	{
		printf("\n %d is not found in array",val);
	}

	return 0;
}
