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
    int x;
    if ((f == 0 && r == size - 1) || (f == r + 1))
    {
        printf("\n Queue is full....");
    }
    else
    {
        if (f == -1)
        {
            f = 0;
            r = 0;
        }
        else
        {
            if (r == size - 1)
            {
                r = 0;
            }
            else
            {
                r = r + 1;
            }
        }
        printf("\n Enter the value: ");
        scanf("%d", &x);
        q[r] = x;
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
        printf("%d is deleted", q[f]);
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            if (f == size - 1)
            {
                f = 0;
            }
            else
            {
                f = f + 1;
            }
        }
    }
}
void dis()
{
    int i;
    if (f == -1)
    {
        printf("\n queue is empty");
    }
    else
    {
        printf("\n elements are in queue: ");
        if (f <= r)
        {
            for (i = f; i <= r; i++)
            {
                printf("\n Q[%d]=%d", i, q[i]);
            }
        }

        else
        {
            for (i = f; i <= size - 1; i++)
            {
                printf("\n Q[%d]=%d", i, q[i]);
            }
            for (f=0; f <= r; f++)
            {
                printf("\n Q[%d]=%d", f, q[f]);
            }
        }
    }
}
