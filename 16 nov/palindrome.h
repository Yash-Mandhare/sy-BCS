#include<stdio.h>

#define bottom -1
#define max 10

typedef struct stack
{
	char value[max];
	int top;
}CSTACK;

void init(CSTACK *st)
{
	(*st).top=bottom;	
	printf("init : %d\n",(*st).top);
}

int isEmpty(CSTACK *st)
{
	return ((*st).top==bottom? 1 : 0);
}

int isFull(CSTACK *st)
{
	return ((*st).top==max-1? 1 : 0);
}

void push(CSTACK *st,char x)
{
	(*st).value[++(*st).top]=x;
}

char pop(CSTACK *st)
{
	return((*st).value[(*st).top--]);
}

char peek(CSTACK *st)
{
	return((*st).value[(*st).top]);
}
