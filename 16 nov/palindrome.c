#include<stdio.h>
#include<string.h>

#include "palindrome.h"

int main()
{
	CSTACK st;
	char str[10];
	int i;
	init(&st);
	printf("Enter a string : ");
	scanf("%s",str);
	printf("\nu entered %s\n",str);
	for(i=0;str[i]!='\0';i++)
		push(&st,str[i]);
	i=0;
	while(!isEmpty(&st))
	{
		printf("[%c-%c]\n",str[i],peek(&st))	;
		if(str[i++]!=pop(&st)) break;	
	}
	if(isEmpty(&st))
		printf("\n palindrome\n");
	else printf("Not palindrome\n");
	return 0;
}