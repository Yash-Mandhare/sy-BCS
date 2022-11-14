#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include"stackOperationDynamic.h"

/
int main (){
    int choice=0;
    printf("DYNAMIC STACK");
    while(1){
        printf("\n\nChose any of the following options:\n");
        printf("\n 0: Exit 1: Push 2: Pop 3: Peek\n 4: Check if stack is empty\n");
        scanf("%d",&choice);
        switch(choice){
            case 0: exit(0);
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: isEmpty(); break;
            default: printf("Please choose a correct option!");
        }
    }
}
