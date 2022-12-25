/*Implement a linear queue library (st_queue.h) of integers using a static implementation of the queue and 
implementing the init(Q), add(Q) and peek(Q) operations. Write a program that includes queue library and 
calls different queue operations*/


#include<stdio.h>
#include "slip101-linearqueue.h"

int main()
{
QUEUE q;//create
int choice, num;
initqueue(&q);
do
{
printf("\n1: ADD\n2: REMOVE\n3: PEEK\n3: EXIT");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(isfull(&q))
printf("Overflow");
else
{
printf("Enter the element to add: ");
scanf("%d",&num);
addq(&q,num);
}
break;
case 2:
if(isempty(&q))
printf("Underflow");
else
{
num=removeq(&q);
printf("The removed element is %d", num);
}
break;
case 3:
if(isempty(&q))
printf("Underflow");
else
{
printf("Value: %d",peek(&q));
q.front--;
}
break;
}

}while(choice!=4);
return 0;
}