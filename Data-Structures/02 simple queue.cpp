#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define size 5
int q[size];
int f = -1;
int r = -1;
void dis();
void insert();
void remove();
int main()
{
    int c;
    clrscr();
    while (c != 4)
    {
        printf("\n\n 1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n");
        printf("\n enter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            remove();
            break;
        case 3:
            dis();
            break;
        case 4:
            printf("\n good bye....");
            exit(0);
        default:
            printf("\n invalid choice");
            break;
        }
    }
    return 0;
}
void insert()
{
    if (r >= size - 1)
    {
        printf("\n Queue is full....");
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
        }
        else
        {
            r = r + 1;
        }
        printf("\n Enter the value: ");
        scanf("%d", &q[r]);
    }
}
void remove()
{
    if (f == -1)
    {
        printf("Underflow..");
    }
    else
    {
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = f + 1;
        }
    }
}
void dis()
{
    int i;
    if (r == -1)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n elements are in queue: ");
        for (i = f; i <= r; i++)
        {
            printf("\n Q[%d]=%d", i, q[i]);
        }
    }
}
