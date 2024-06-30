#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} typedef node;
int main()
{
    int c;
    clrscr();
    node *insertbeg(node *);
    node *deletebeg(node *);
    void insertlast(node *);
    void deletelast(node *);
    void insert(node *);
    void display(node *);
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    clrscr();
    do
    {
        printf("\n\n1. insert data to linklist\n2. insert at first\n3. insert at last\n4. display\n5. delete at first\n6. delete at last\n 7. exit");
        printf("\n Enter your choice: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert(head);
            break;
        case 2:
            head = insertbeg(head);
            break;
        case 3:
            insertlast(head);
            break;
        case 4:
            display(head);
            break;
        case 5:
            head = deletebeg(head);
            break;
        case 6:
            deletelast(head);
            break;
        case 7:
            printf("\n good bye...");
            break;
        default:
            printf("\n Invalid choice!!!");
            break;
        }
    } while (c != 7);
    getch();
    return 0;
}
void insert(node *list)
{
    int c;
    do
    {
        printf("\n Enter linklist data: ");
        scanf("%d", &list->data);
        printf("\n do you want more nodes?");
        printf("\n Enter 0 for stop insert data(1 for continue): ");
        scanf("%d", &c);
        if (c == 0)
        {
            list->next = NULL;
        }
        else
        {
            list->next = (node *)malloc(sizeof(node));
            list = list->next;
        }
    } while (c != 0);
}
void display(node *list)
{
    clrscr();
    while (list != NULL)
    {
        printf("%d ->", list->data);
        list = list->next;
    }
}
node *insertbeg(node *list)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->next = list;
    printf("\n Enter a value: ");
    scanf("%d", &temp->data);
    list = temp;
    return list;
}
void insertlast(node *list)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->next = NULL;
    printf("\n Enter a value: ");
    scanf("%d", &temp->data);
    while (list->next != NULL)
    {
        list = list->next;
    }
    list->next = temp;
}
node *deletebeg(node *list)
{
    node *temp;
    temp = list->next;
    free(list);
    list = temp;
    return list;
}
void deletelast(node *list)
{
    node *perv = NULL;
    while (list->next != NULL)
    {
        perv = list;
        list = list->next;
    }
    free(list);
    perv->next = NULL;
}