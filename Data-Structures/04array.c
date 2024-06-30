#include <stdio.h>
#include <conio.h>
#define size 5
int a[size], top = -1;
void insert();
void sort();
void del1();
void del2();
void update();
void search();
void display();
int main()
{
	int c;
	clrscr();
	while (c != 8)
	{
		printf("\n\n 1. insert\n 2. delete by position\n 3. delete by value\n 4. sort data\n 5. search element\n 6. update element\n 7. display\n 8. exit");
		printf("\n Enter your choice: ");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			insert();
			break;
		case 2:
			del1();
			break;
		case 3:
			del2();
			break;
		case 4:
			sort();
			break;
		case 5:
			search();
			break;
		case 6:
			update();
			break;
		case 7:
			display();
			break;
		case 8:
			printf("\n good bye....");
			break;
		default:
			printf("\n Invalid choice!");
			break;
		}
	}
	getch();
	return 0;
}
void insert()
{
	int x;
	if (top == size - 1)
	{
		printf("\n Array is full...");
	}
	else
	{
		printf("\n enter the element value: ");
		scanf("%d", &x);
		top = top + 1;
		a[top] = x;
	}
}
void display()
{
	int i;
	if (top == -1)
	{
		printf("\n array is empty");
	}
	else
	{

		printf("\n elements are in array: ");
		for (i = top; i >= 0; i--)
		{
			printf("\n a[%d]=%d", i, a[i]);
		}
	}
}
void sort()
{
	int i, j, t;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
void del1()
{
	int i, pos;
	printf("\n Enter position of element: ");
	scanf("%d", &pos);
	for (i = pos; i < size - 1; i++)
	{
		a[i] = a[i + 1];
	}
	top = top - 1;
}
void del2()
{
	int i, val, pos;
	printf("\n Enter value you want to delete: ");
	scanf("%d", &val);
	for (i = 0; i < size; i++)
	{
		if (a[i] == val)
		{
			pos = i;
			break;
		}
	}
	if (pos == i)
	{
		for (i = pos; i < size - 1; i++)
		{
			a[i] = a[i + 1];
		}
	}
	top = top - 1;
}
void search()
{
	int i, c, val, j;

	printf("\n\n 1. search by position\n 2. search by value");
	printf("\n Enter your choice: ");
	scanf("%d", &c);
	switch (c)
	{
	case 1:
		printf("\n Enter position: ");
		scanf("%d", &i);
		if (i >= size)
		{
			printf("\n position not exist in array!!!");
		}
		else
		{
			printf("\n searched value is %d", a[i]);
		}
		break;
	case 2:
		printf("\n Enter value: ");
		scanf("%d", &val);
		for (i = 0; i < size; i++)
		{
			if (a[i] == val)
			{
				j = i;
				printf("\n searched value is at a[%d]=%d", j, a[j]);
				break;
			}
		}
		break;
	default:
		printf("\n Invalid choice!!");
		break;
	}
}
void update()
{
	int i, c, val, j;

	printf("\n\n 1. update by position\n 2. update by value");
	printf("\n Enter your choice: ");
	scanf("%d", &c);
	switch (c)
	{
	case 1:
		printf("\n Enter position: ");
		scanf("%d", &i);
		if (i >= size)
		{
			printf("\n position not exist in array!!!");
		}
		else
		{
			printf("\n Enter new value: ");
			scanf("%d", &a[i]);
		}
		break;
	case 2:
		printf("\n Enter value: ");
		scanf("%d", &val);
		for (i = 0; i < size; i++)
		{
			if (a[i] == val)
			{
				j = i;
				printf("\n enter new value: ");
				scanf("%d", &a[j]);
				break;
			}
		}
		break;
	default:
		printf("\n Invalid choice!!");
		break;
	}
}
