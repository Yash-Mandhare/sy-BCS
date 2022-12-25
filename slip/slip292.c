/*There are lists where new elements are always appended at the end of the list.
 The list can be implemented as a circular list with the external pointer pointing to the last element of the list. 
 Implement singly linked circular list of integers with append and display operations. 
The operation append(L, n), appends to the end of the list, n integers accepted from user.*/

	
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void append(struct node **head,int n)
{
struct node *newnode;
newnode=malloc(sizeof(struct node));
newnode->data=n;
if(*head==NULL)
newnode->next=newnode;
else
{
newnode->next=(*head)->next;
(*head)->next=newnode;
}
*head=newnode;
}
void create(struct node ** head, int n)
{
int i,data;
struct node *newnode;
 
for(i=1;i<=n;i++)
{
printf("Element Append %d\n",i);
scanf("%d",&data);
newnode=malloc(sizeof(struct node));
newnode->data=data;
if(*head==NULL)
newnode->next=newnode;
else
{
newnode->next=(*head)->next;
(*head)->next=newnode;
}
*head=newnode;
}
}
void display(struct node *head)
{
struct node *temp = head;
do
{
printf(" %d ",temp->data);
temp=temp->next;
}while(temp!=head);
printf("\n");
}
void main()
{
int n;
struct node *head=NULL;
printf("How many elements you want to Append? \n ");
scanf("%d",&n);
create(&head,n);
printf("Display the elements:\n ");
display(head);
}