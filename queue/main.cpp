#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue node;
node *frontt=NULL,*rear=NULL,*head,*temp;

void Push()
{
    head = (node*)malloc(sizeof(node));
    cout<<"enter data"<<endl;
    cin>>head->data;
    if(frontt = NULL)
    {
        head->next=NULL;
        frontt=rear=head;
    }
    else
    {
        rear->next = head;
        head->next = NULL;
        rear = head;
    }

}

int Pop()
{
    if(frontt==NULL)
        cout<<"Empty Queue"<<endl;
    else
    {
        temp=frontt;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            return temp->data;
            free(temp);
        }
    }
}

void Traverse()
{
    temp=frontt;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int main()
{
    int choice;
    do
    {
        cout<<"Enter to:"<<endl<<"1.Push"<<endl<<"2.POP"<<endl<<"3.TRAVERSE"<<endl<<"4.EXIT"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1 : Push();
                     break;
            case 2 : cout<<"Deleted element is :"<<endl<<Pop()<<endl;
                     break;
            case 3 : Traverse();
                     break;
            case 4 : exit(0);
        }
    }
    while(choice < 5);
    return 0;
}

