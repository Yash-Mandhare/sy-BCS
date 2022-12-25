/*Write a C program to check whether the contents of two stacks are
identical. Use stack library to perform basic stack operations. Neither
stack should be changed.*/


#include <stdio.h>

#include "slip82-stack.h"

int main(void)

{

    stack s1,s2;

    init(&s1);

    init(&s2);

    int num,n,i,j,size,number;

     printf("How many elements in stack1: ");

     scanf("%d",&n);

     printf("Enter element to push: ");

     for(i=0;i<n;i++)

     {

         scanf("%d",&num);

         push(&s1,num);

     }

     printf("How many elements in stack2: ");

     scanf("%d",&size);

     printf("Enter elements in push: ");

      for(i=0;i<size;i++)

     {

         scanf("%d",&number);

         push(&s2,number);

     }

     stack t1,t2;

     init(&t1);

     init(&t2);

     while(!isempty(&s1) && !isempty(&s2) && (peek(&s1)==peek(&s2)))

     {

         push(&t1,pop(&s1));

         push(&t2,pop(&s2));

     }



     if(isempty(&s1) && isempty(&s2))

     {

        printf("\nStacks are identical\n");

     }

     else

     {

         printf("\nNot Equal\n");

     }



     while(!isempty(&t1))

        push(&s1,pop(&t1));



     while(!isempty(&t2))

        push(&s2,pop(&t2));

}