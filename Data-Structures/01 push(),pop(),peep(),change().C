#include <stdio.h>
#include <conio.h>
#include <stdlib.h>    //for execute exit(0) we need this header file  
#define size 5         // max size of stack is 5 you can change if you want  
int top = -1, s[size]; // this is global variables we can use in any function
void push();
void peep();
void pop();
void change();
void display();
int main()
{
    int c;
    clrscr();
    while (1) // for infinity loop
    {
        printf("\n\n 1. push the element\n 2. display\n 3. peep the element\n 4. pop the element\n 5. change the element\n 6. end(exit)");
        printf("\n\n enter the choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            peep();
            break;
        case 4:
            pop();
            break;
        case 5:
            change();
            break;
        case 6:
            exit(0); // with out choose 6 you can not able to exit from code

        default:
            printf("\n invalid choice");
            break;
        }
    }
}

void push()
{
    int x;
    if (top == size - 1) // check if array have storage to store value anymore
    {
        printf("\n stack is overflow!!");

    }
    else
    {
        printf("\n enter the element value to add into the stack: ");
        scanf("%d", &x);
        top = top + 1; // this set position to add element
        s[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        top = top - 1;
        s[top + 1] = s[top];
    }
}
void peep()
{
    int i;
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n Enter position for peep: ");
        scanf("%d", &i);
        if (top - i <= -1)
        {
            printf("\n underflow");
        }
        else
        {
            printf("\n peep value is %d", s[i]);
        }
    }
}
void change()
{
    int i, x;
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("Enter position of element to change value: ");
        scanf("%d", &i);
        if (top - i + 1 <= -1)
        {
            printf("\n underflow");
        }
        else
        {
            printf("Enter new value: ");
            scanf("%d", &x);
            s[i] = x;
        }
    }
}
void display() // for display stack all elements
{
    int i;
    if (top == -1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("\n elements are in stack: ");
        for (i = top; i >= 0; i--)
        {
            printf("\n s[%d]=%d", i, s[i]);
        }
    }
}