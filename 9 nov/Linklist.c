#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};

void traverse(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }
    
}
int searchElement(struct node* head, int item)
{
    
    struct node* ptr=head;
    int index=0;
    
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            return index;
        }
        ptr=ptr->next;
        index++;
    }
    return -1;
}

int main()

{
    int item;
    char ch;
    struct node* head;
    struct node* sec;
    struct node* third;
    
    head=(struct node* )malloc(sizeof(struct node));
    sec=(struct node* )malloc(sizeof(struct node));
    third=(struct node* )malloc(sizeof(struct node));
    
    head->data=100;
    head->next=sec;
    
    sec->data=101;
    sec->next=third;
    
    third->data=102;
    third->next=NULL;
    printf("Linked List Before Traverse:\n");
    traverse(head);
    printf("\nLinked List After Traverse:\n");
    traverse(head);
    do
    {
        printf("Enter the element you want to search in Linked List:");
        scanf("%d", &item);
        int index=searchElement(head, item);
        if(index==-1)
            printf("Element is not found in Linked List\n");
        else
        printf("Element is found in linked list at %d position\n", index);
        printf("Do you want to search another element y/n:\n");
        scanf(" %c",&ch);
    } while(ch!='n');
}
