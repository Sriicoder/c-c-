#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct stack
{
int data;
struct stack *next;
};

typedef struct stack st;
st *top=NULL,*head,*temp;

void PUSH()
{
    head = (st*)malloc(sizeof(st));
    cout<<"enter the data"<<endl;
    cin>>head->data;
    if(top==NULL)
    {
        head->next=NULL;
        top = head;
    }
    else
    {
        head->next=top;
        top=head;
    }
}
int POP()
{
    if(top==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        temp=top;
        top=top->next;
        return(temp->data);
        free(temp);
    }
}
void TRAVERSE()
{
    temp=top;
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
            case 1 : PUSH();
                     break;
            case 2 : cout<<"Deleted element is :"<<endl<<POP()<<endl;
                     break;
            case 3 : TRAVERSE();
                     break;
            case 4 : exit(0);
        }
    }
    while(choice < 5);
    return 0;
}
