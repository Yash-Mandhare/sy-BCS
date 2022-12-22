/*Implement a stack library (ststack.h) of integers using a static implementation of the 
stack and implementing the operations like init(S), S=push(S) and S=pop(S).
 Write a driver program that includes stack library and calls different stack operations.*/

	
#include<stdio.h>
#define MAX 15
 
char name[MAX],top;
 
void init()
{
    top=-1;
    printf("\nStatic Stack Initiaized\n");
}
 
void push()
{
    if(top==MAX-1)
    {
        printf("\nStatic Stack is full\n");
    }
    else
    {
        top++;
        printf("Enter a character to be push:");
        scanf(" %c",&name[top]);
    }
}
 
void pop()
{
    if(top==-1)
    {
        printf("\nStatic Stack is empty\n");
    }
    else
    {
        printf("Poped value is:%c",name[top]);
        top--;
    }
}
 
void peek()
{
    if(top==-1)
    {
        printf("\nStatic Stack is empty\n");
    }
    else
    {
        printf("Character at top is:%c",name[top]);
    }
}
 
void isempty()
{
    if(top==-1)
    {
        printf("\nStatic Stack is empty\n");
    }
    else
    {
        printf("\nStatic Stack is not empty\n");
    }
}
 
void isfull()
{
    if(top==MAX-1)
    {
        printf("\nStatic Stack is full\n");
    }
    else
    {
        printf("\nStatic Stack is not full\n");
    }
}