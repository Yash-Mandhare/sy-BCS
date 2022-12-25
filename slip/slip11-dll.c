/*Implement a list library (doublylist.h) for a doubly linked list of integers
with the create, display operations. Write a menu driven program to call
these operations.*/

#include<stdio.h>
#include "slip11-dll.h"
void main()
{
    int c;
    start=NULL;
    while(1)
    {
        printf("\n1.Create\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:create();  break;
            case 2:delete();  break;
            case 3:display(); break;
            case 4:exit(0);
        }
    }
}