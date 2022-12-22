/*Write a program that checks whether a string of characters is palindrome
or not. The function should use a stack library (cststack.h) of stack of
characters using a static implementation of the stack.*/

#include<stdio.h>
#include<string.h>
#define MAX 15
 
char name[MAX],top;
 
void init()
{
    top=-1;
    printf("\nStatic Stack Initiaized\n");
}
 
void push(char c)
{
        top++;
        name[top]=c;
}
 
char pop()
{
    return name[top--];
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