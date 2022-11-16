#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node* next;
    
};

struct node* create(int n)
{
    struct node* head, *p, *temp;
    int i;
    
    head=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data of head node");
    scanf("%d",&head->data);
    head->next=NULL;
    
    p=head;
    for(i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data");
        scanf("%d",&temp->data);
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
    return head;
}
struct node* insert(struct node* head, int loc, int x)
{
    struct node* temp, *p;
    int i, ele, index  ;
    
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->next=NULL;
    
    if(head==NULL)
        head=temp;
    else if(index==1)
        {
            temp->next=head;
            head=temp;
        }
        else
        {
            p=head;
            for(i=1;i<index-1;i++)
                p=p->next;
            temp->next=temp;
        }
        return head;
}
void traverse(struct node* head)
{
    struct node* p;
    p=head;
    while(p!=NULL)
    {
        printf("%d-->", p->data);
        p=p->next;
    }
    printf("NULL\n");
}
struct node* delete(struct node* head, int index)
{
    struct node* p, *q;
    int i;
    
    if(head==NULL)
        printf("\nThere is nothing");
    else if(index==1)
    {
        q=head;
        head=head->next;
        q->next=NULL;
        free(q);
    }
    else
    {
        i=1;
        p=head;
        q=p->next;
        while(i<index-1)
        {
            p=p->next;
            q=q->next;
            i++;
        }
        p->next=q->next;
        q->next=NULL;
        free(q);
    }
    return head;
}
int search(struct node* head, int x,int ele )
{
    int index=-1, i;
    struct node* p;
    i=1;
    p=head;
    while(p!=NULL)
    {
        if(p->data==ele)
        { 
            index=i;
            break;
        }
        p=p->next;
        i++;
    }
    return index;
}