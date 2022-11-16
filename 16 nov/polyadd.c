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

POLY* insert(POLY *l, int c, int e)
{
	int i;
	POLY *t;
//	printf("inserting %d-%d\n",c,e);
	POLY *newnode = malloc(sizeof(POLY));
	newnode->coef = c;
	newnode->exp = e;
	newnode->next=NULL;
//	printf("l->next=%u\n",l->next);
	if(l->next==NULL)
	{
//		printf("inserting 1st node\n");
		newnode->next=l->next;
		l->next=newnode;
	}
	else
	{
		for(t=l;t->next!=NULL;t=t->next);
		newnode->next=t->next;
		t->next=newnode;
	}
	return l;
}

void display(POLY *l)
{
	POLY *t=l;
	for(t=l->next;t->next!=NULL;t=t->next)
		if(t->coef!=0) printf("%dx^%d + ",t->coef,t->exp);
	printf("%d",t->coef);
}

POLY *addpoly(POLY* poly1,POLY* poly2)
{
	POLY *t1=poly1->next,*t2=poly2->next,*poly3=NULL;
	poly3=init(poly3);
//	printf("\ninside add\n");
	while(t1!=NULL && t2!=NULL)
	{
//		printf("%d-%d\n",t1->exp,t2->exp); 
		if(t1->exp==t2->exp)
		{
			poly3=insert(poly3,t1->coef+t2->coef,t1->exp);
			t1=t1->next;
			t2=t2->next;
//			display(poly3);
		}
		else if(t1->exp > t2->exp)
		{
			printf("inserting poly1\n");
			poly3=insert(poly3,t1->coef,t1->exp);
			t1=t1->next;
//			display(poly3);
		}
		else
		{
//			printf("inserting poly2\n");
			poly3=insert(poly3,t2->coef,t2->exp);
			t2=t2->next;
//			display(poly3);
		}
	}
	while(t1!=NULL)
	{
		poly3=insert(poly3,t1->coef,t1->exp);
		t1=t1->next;
	}
	while(t2!=NULL)
	{
		poly3=insert(poly3,t2->coef,t2->exp);
		t2=t2->next;
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
		if(coef!=0) poly1=insert(poly1,coef,i);
	}
	printf("\n1st polynomial is :");display(poly1);

	printf("\nEnter degree of 2nd polynomial : ");
	scanf("%d",&deg);
	for(i=deg;i>=0;i--)
	{
		printf("\nEnter coefficient for x^%d : ",i);
		scanf("%d",&coef);
		poly2=insert(poly2,coef,i);
	}

	printf("\n2nd polynomial is :");display(poly2);
			
	poly3=addpoly(poly1,poly2);
	printf("\nresultant polynomial is :");display(poly3);	
	return 0;
}
