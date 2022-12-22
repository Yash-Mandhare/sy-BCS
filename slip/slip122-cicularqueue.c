/*Implement a circular queue library (cir_queue.h) 
of integers using a dynamic (circular linked list) implementation of the queue and implementing 
init(Q), AddQueue(Q) and DeleteQueue(Q) operations.
 Write a menu driven program that includes queue library and calls different queue operations.*/


 	
#include <stdio.h>
#include <stdlib.h>
#include "slip122-circularqueue.h"
int menu()
{
int ch;
system("clear");
printf("\n\t0) Exit");
printf("\n\t1) Append");
printf("\n\t2) Delete");
printf("\n\t3) Insert");
printf("\n\t4) Display");
printf("\n\tEnter Choice : ");
scanf("%d",&ch);
return ch;
}
int main()
{
struct node *head=NULL,*end=NULL;
int ch;
while((ch=menu())!=0)
{
if(ch==1)
{
int data;
printf("\tenter data:");
scanf("%d",&data);
Append(&head,data);
}
else
if(ch==2)
{
int data;
printf("\tenter data to delete : ");
scanf("%d",&data);
if( Delete(&head,data) == 1 )
printf("\n\tDeleted");
else
printf("\n\tNot Deleted");
getchar();getchar();
}
else
if(ch==3)
{
int data,position;
printf("\tenter data to insert : ");
scanf("%d",&data);
printf("\tenter position to insert at : ");
scanf("%d",&position);
if( Insert(&head,data, position) == 1 )
printf("\n\tInserted");
else
printf("\n\tNot Inserted");
getchar();getchar();
}
else
if(ch==4)
{
Display(head);
getchar();getchar();
}
}
}