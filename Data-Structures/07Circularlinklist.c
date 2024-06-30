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

    void create(node *);
    node *insertbeg(node *);
    node *deletebeg(node *);
    void insertlast(node *);
    node *deletelast(node *);
    node *deletekeynode(node *,int);
    void inseraft_key(node *);
    void display(node *);
    int choice,key;
    node *head = NULL;
    head = (node *)malloc(sizeof(node));
    clrscr();
    do
    {
        printf("\n 1. create circular linklist");
        printf("\n 2. insert at beginning");
        printf("\n 3. display");
        printf("\n 4. insert at last");
        printf("\n 5. delete at beginning");
        printf("\n 6. delete at last");
        printf("\n 7. deletekeynode\n 8. insertafterkeynode\n 9. exit");

        printf("\n enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create(head);
            break;
        case 2:
            head = insertbeg(head);
            break;
        case 3:
            display(head);
            break;
        case 4:
            insertlast(head);
            break;
        case 5:
            head = deletebeg(head);
            break;
        case 6:
            head = deletelast(head);
            break;
        case 7:
            printf("\n Enter a value: ");
            scanf("%d",&key);
            head = deletekeynode(head,key);
            break;
        case 8:
            inseraft_key(head);
            break;
        case 9:
            printf("\n\n !! GOOD BYE !!");
            break;
        default:
            printf("\n wrong choice entered");
        }

    } while (choice != 9);
    getch();
    return 0;
}

void create(node *list)
{
    int c;
    node *temp;
    temp = list;
    do
    {
        printf("\n enter data in list : ");
        scanf("%d", &list->data);
        printf("\n \n Do you want to create more nodes");
        printf("\n0 is for exit \n1 is for create");
        printf("\n enter choice : ");
        scanf("%d", &c);
        if (c == 0)
        {
            list->next = temp;
        }
        else
        {
            list->next = (node *)malloc(sizeof(node));
            list = list->next;
        }
    } while (c != 0);
}

node *insertbeg(node *list)
{
    node *temp, *temp1;
    temp = list;
    temp1 = (node *)malloc(sizeof(node));
    printf("\n enter value : ");
    scanf("%d", &temp1->data);
    temp1->next = temp;
    while (list->next != temp)
    {
        list = list->next;
    }
    list->next = temp1;
    return temp1;
}

void display(node *list)
{
    node *temp;
    temp = list;
    clrscr();
    printf("\n \n ");
    while (list->next != temp)
    {
        printf("%d -> ", list->data);
        list = list->next;
    }
    printf("%d", list->data);
}
void insertlast(node *list)
{
    node *temp, *temp1;
    temp = list;
    while (list->next != temp)
    {
        list = list->next;
    }
    temp1 = (node *)malloc(sizeof(node));
    printf("\n Enter a value: ");
    scanf("%d", &temp1->data);
    temp1->next = temp;
    list->next = temp1;
}
node *deletebeg(node *list)
{
    node *temp, *temp1;
    temp = list;
    if (list->next == temp)
    {
        free(list);
        return NULL;
    }
    else
    {
        temp1 = list->next;
        while (list->next != temp)
        {
            list = list->next;
        }
        list->next = temp1;
        return temp1;
    }
}
node *deletelast(node *list)
{
    node *temp, *prev = NULL;
    temp = list;
    if (list->next == temp)
    {
        free(list);
        return NULL;
    }
    else
    {
        prev = temp;
        list = list->next;
        while (list->next != temp)
        {
            prev = list;
            list = list->next;
        }
        free(prev->next);
        prev->next = temp;
        return temp;
    }
}
void inseraft_key(node *list)
{
    node *temp,*temp1;
    int key;
    temp=list;

    printf("\n Enter keynode: ");
    scanf("%d",&key);

    while(list->data!=key && list->next!=temp)
    {
        list=list->next;
    }

    if(list->data==key && list->next!=temp)
    {
        temp1=(node *)malloc(sizeof(node));
        printf("\n enter node value: ");
        scanf("%d",&temp1->data);
        temp1->next = list->next;
        list->next=temp1;
    }

    else if(list->data==key && list->next==temp)
    {
        insertlast(temp);
    }

    else if(list->data!=key && list->next!=temp)
    {
        printf("\n %d Node was not found!!",key);
    }

}
node *deletekeynode(node *list,int key)
{
    node *prev=NULL,*temp,*temp1;
    temp1 = list;
    if (list->data==key && list->next == temp1)
    {
        free(list);
        return NULL;
    }
    else
    {
        if(list->data==key && list->next!=temp1)
        {
            temp = list->next;
            while (list->next != temp1)
            {
                list = list->next;
            }
            list->next = temp;
            list=temp;
            return list;
        }
        else
        {
            while(list->data!=key && list->next!=temp1)
            {
                prev=list;
                list=list->next;
            }
            if(list->data==key && list->next!=temp1)
            {
                prev->next=list->next;
                free(list);
            }
            else if(list->data==key && list->next==temp1)
            {
                prev->next=temp1;
                free(list->next);
            }
            else if(list->data!=key&&list->next==temp1)
            {
                printf("\n entered keynode is not in list");
            }
        }
    }
    return temp1;
}
