/*Implement a stack library (ststack.h) of integers using a static implementation of the 
stack and implementing the operations like init(S), S=push(S) and S=pop(S).
 Write a driver program that includes stack library and calls different stack operations.*/


#include<stdio.h>
#include<stdlib.h>
#include "slip131-stststack.h"
int main()
{
    int ch;
    while(1)
    {
        printf("\n-----Static Stack of characters-----\n");
        printf("\n1.Init\n");
        printf("2.Push\n");
        printf("3.Pop\n");
        printf("4.Peek\n");
        printf("5.IsEmpty\n");
        printf("6.IsFull\n");
        printf("7.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:init();  break;
            case 2:push(); break;
            case 3:pop(); break;
            case 4:peek(); break;
            case 5:isempty(); break;
            case 6:isfull(); break;
            case 7:exit(0);
        }
    }
}