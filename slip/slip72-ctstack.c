/*Write a program that checks whether a string of characters is palindrome
or not. The function should use a stack library (cststack.h) of stack of
characters using a static implementation of the stack.*/

void palindrome();
#include<stdio.h>
#include<stdlib.h>
#include "slip72-ctstack.h"
int main()
{
    int ch,i;
    char string[15];
    while(1)
    {
        printf("\n-----Static Stack to check palindrome string-----\n");
        printf("\n1.Init\n");
        printf("2.Check Palindrome String\n");
        printf("3.IsEmpty\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:init();  break;
            case 2: palindrome(); break;
            case 3:isempty(); break;
            case 4:exit(0);
        }
    }
}
 
void palindrome()
{
        char string[15];
        int i,count=0,len;
        printf("\nEnter a string:");
        scanf("%s",string);
        len=strlen(string);
        for(i=0;i<len;i++)
        {
            push(string[i]); 
        }   
        for (i = 0; i <len; i++)
            {
            if (string[i] == pop())
                    count++;
            }
  
            if (count == len)
                printf("%s is a Palindrome string\n", string);
            else
                printf("%s is not a palindrome string\n", string);
}