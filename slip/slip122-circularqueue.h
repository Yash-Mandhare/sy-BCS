/*Implement a circular queue library (cir_queue.h) 
of integers using a dynamic (circular linked list) implementation of the queue and implementing init(Q), AddQueue(Q) and DeleteQueue(Q) operations.
 Write a menu driven program that includes queue library and calls different queue operations.*/

 struct node
{
int data;
struct node *next;
};
struct node * Create()
{
return malloc(sizeof(struct node));
}
int isEmpty(struct node *head)
{
return (head == NULL) ? 1 : 0;
}
void Append(struct node **head, int data)
{
struct node *newnode;
newnode = Create();
newnode->data = data;
newnode->next = NULL;
if( *head==NULL )
*head = newnode;
else
{
struct node *temp = *head;
do
{
temp = temp->next;
}while(temp->next != *head );
temp->next = newnode;
}
newnode->next = *head;
}
void Display(struct node *head)
{
struct node *temp = head;
printf("\n\t[");
if( temp != NULL )
{
do
{
printf("%d,",temp->data);
temp = temp->next;
} while( temp != head );
}
printf("]");
}
int Delete(struct node **head, int data)
{
struct node *temp = *head, *prev;
if( temp != NULL )
{
do
{
if( temp->data == data )
{
if( temp->next == *head )
head = NULL;
else
if( temp == *head )
{
struct node *temp2 = *head;
while( temp2->next != *head )
temp2 = temp2->next;
temp2->next = (*head)->next;
*head = (*head)->next;
}
else
prev->next = temp->next;
free(temp);
return 1;
}
prev = temp;
temp = temp->next;
} while(temp != *head);
return 0;
}
}
int Insert(struct node **head, int data, int pos)
{
struct node *newnode;
newnode = Create();
newnode->data = data;
if( pos < 1 )
return 0;
if( pos == 1 )
{
if( *head==NULL )
{
*head = newnode;
newnode->next = *head;
return 1;
}
else
{
newnode->next = *head;
*head = newnode;
return 1;
}
}
else
if( pos > 1 )
{
struct node *temp = *head;
if( temp != NULL )
{
int i;
for(i=1; i<pos-1; ++i)
{
temp = temp->next;
if( temp == *head)
return 0;
}
newnode->next = temp->next;
temp->next = newnode;
return 1;
}
}
}