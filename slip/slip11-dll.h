/*Implement a list library (doublylist.h) for a doubly linked list of integers
with the create, display operations. Write a menu driven program to call
these operations.*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next,*prev;
}*start;
 
void create()
{
    struct node *temp,*q;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter a character:");
    scanf(" %c",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
 
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=temp;
        temp->prev=q;
    }
}
 
 
void display()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("\nLinked List is empty\n");
        return;
    }
    printf("The Linked List:\n");
    temp=start;
    while(temp!=NULL)
    {
 
        printf("%d<-%c->%d->|",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }
}
 
void delete()
{
 
    struct node *temp,*p;
    int pos,t;
    printf("\nEnter the position:");
        scanf("%d",&pos);
    t=1;
    temp=start;
    if(start==NULL)
    {
        printf("\nLinked List is empty\n");
        return;
    }
 
    if(start->next==NULL)
    {
        free(start);
        start=NULL;
        printf("\nNode Deleted Successfully\n");
        return;
    }
 
    if(pos==1)
    {
        start=start->next;
        start->prev=NULL;
        free(temp);
        printf("\nNode Deleted Successfully\n");
        return;
    }
 
    while(t< pos)
    {
            temp=temp->next;
            t++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
    free(temp);
    printf("\nNode deleted successfully\n");
}