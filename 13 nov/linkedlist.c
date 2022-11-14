#include <stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

int main() {
  struct  node* head;
    
    int choice, n, ele, index, loc;
    
    do
    {
        printf("\n1:Create\n2:Insert\n3:Traverse\n4:Delete\n5:Search\n6:Exit");
        printf("Enter your choice");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: printf("Enter how many nodes:");
                    scanf("%d", &n);
                    head=create(n);
                    break;
            case 2: printf("\nEnter location");
                    scanf("%d", &index);
                    printf("Enter elements to be inserted");
                    scanf("%d",&ele);
                    head=insert(head, index, ele);
                    break;
            case 3: traverse(head);
                    break;
            case 4: printf("\nEnter location whose data to be deleted:");
                    scanf("%d",&index);
            case 5: printf("\nEnter data to be searched:");
                    scanf("%d",&ele);
                    loc=search(head, ele);
                    if(index==-1)
                        printf("\n%d found at %d location", ele, index);
                    break;
                
        }
        
    }while(choice!=6);
    return 0;
}
