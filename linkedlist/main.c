#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct list
{
    int data;
    struct node *next;
};

typedef struct list NODE;
NODE *start=NULL;
NODE *head,*temp,*prev;


void insert()
{

    head = (NODE*)malloc((sizeof(NODE)));
    printf("enter data value :");
    scanf("%d",&head->data);
    if(start==NULL)
    {
        head->next = NULL;
        start = head;
    }
    else
        {
        temp = start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = head;
    head->next = NULL;
        }
}

void traverse()
{
    temp = start;
    while(temp->next!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    printf(" %d ",temp->data);

}

void insertbeg()
{
    head : (NODE*)malloc(sizeof(NODE));
    printf("enter data value :");
    scanf("%d",&head->data);
    if(start==NULL)
    {
        head->next = NULL;
        start = head;
    }
    else
    {
        head->next=start;
        start = head;
    }
}

void insertend()
{
    head = (NODE*)malloc(sizeof(NODE));
    printf("enter data value :");
    scanf("%d",&head->data);
    if(start==NULL)
    {
        head->next = NULL;
        s tart=head;
    }
    else
    {
        temp = start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        head->next=NULL;
    }
}

void insertpos()
{
    int count = 1,pos;
  head = (NODE*)malloc(sizeof(NODE));
    printf("enter the position at which you want to insert the element : \n");
    scanf("%d",&pos);
    printf("enter data value :");
    scanf("%d",&head->data);
    temp = start;
    if(pos==1)
    {
        insertbeg();
    }
    else
    {
        while(temp!=NULL && count != pos)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }
        if(temp!=NULL)
        {
            prev->next=head;
            head->next=temp;
        }
        else if(count==pos)
        {
            prev->next=head;
            head->next=NULL;
        }
        else
            printf("\nInvalid position!");
    }
}


int main()
{
    char s;
    char c;
    char ch;
    while(1)
                {
                insert();
                printf("enter (y)yes to insert more, (n)no to not. \n");
                fflush(stdin);
                scanf("%c",&ch);
                if(ch=='n')
                break;
                }




    while(1)
    {
         printf("enter m to get menu or e to exit!");
         fflush(stdin);
         scanf("%c",&s);
        if(s=='m')
        {
    printf("Input : \nib : To insert a node in the beginning\nie : To insert a node at the end\nip : To insert a node at a desired position\nd  : To delete a node\nv  : To view the link list");
    fflush(stdin);
    scanf("%c",&c);
    switch(c)
    {
                case 'a' : insertbeg();
                            break;
                case 'b' :  insertend();
                            break;
                case 'c' :  insertpos();
                            break;


                case 'd'  :
                            break;
                case 'v'  : traverse();
                            break;


    }
        }
    }


return 0;
}
