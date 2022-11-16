#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int coef,exp;
	struct node *next;
}POLY;

POLY* init(POLY *l)
{
	l = malloc(sizeof(POLY));
	l->next=NULL;
	return l;
}

void insert(POLY *l, int c, int e)
{
	int i;
	POLY *t;

	POLY *newnode = malloc(sizeof(POLY));
	newnode->coef = c;
	newnode->exp = e;
	newnode->next=NULL;

	if(l->next==NULL)
	{
		newnode->next=l->next;
		l->next=newnode;
	}
	else
	{
		for(t=l;t->next!=NULL;t=t->next);
		newnode->next=t->next;
		t->next=newnode;
	}
}

void display(POLY *l)
{
	POLY *t=l;
	for(t=l->next;t->next!=NULL;t=t->next)
		if(t->coef!=0) printf("%dx^%d + ",t->coef,t->exp);
	printf("%d",t->coef);
}

POLY * search( POLY *poly3, int e)
{
	POLY *temp;
	for(temp=poly3->next;temp!=NULL;temp=temp->next)
		if(temp->exp==e)
			return temp;
	return NULL;	
} 

POLY *multpoly(POLY* poly1,POLY* poly2)
{
	POLY *t1=poly1->next,*t2=poly2->next,*poly3=NULL,*found=NULL;
	poly3=init(poly3);
	for(;t1!=NULL;t1=t1->next)
	{
		for(t2=poly2->next;t2!=NULL;t2=t2->next)
		{	
			int c=t1->coef*t2->coef;
			int e=t1->exp+t2->exp;
			found=search(poly3,e);
			if(found==NULL)
				insert(poly3,c,e);
			else
				found->coef+=c;
		}
	}
	
	return poly3;
}

int main()
{
	POLY *poly1=NULL,*poly2=NULL,*poly3=NULL;
	poly1=init(poly1);
	poly2=init(poly2);
	poly3=init(poly3);

	int deg,i,coef;
	printf("\nEnter degree of 1st polynomial : ");
	scanf("%d",&deg);
	for(i=deg;i>=0;i--)
	{
		printf("\nEnter coefficient for x^%d : ",i);
		scanf("%d",&coef);
		if(coef!=0) insert(poly1,coef,i);
	}
	printf("\n1st polynomial is :");display(poly1);

	printf("\nEnter degree of 2nd polynomial : ");
	scanf("%d",&deg);
	for(i=deg;i>=0;i--)
	{
		printf("\nEnter coefficient for x^%d : ",i);
		scanf("%d",&coef);
		if(coef!=0) insert(poly2,coef,i);
	}

	printf("\n2nd polynomial is :");display(poly2);
			
	poly3=multpoly(poly1,poly2);
	printf("\nresultant polynomial is :");display(poly3);	
	return 0;
}
