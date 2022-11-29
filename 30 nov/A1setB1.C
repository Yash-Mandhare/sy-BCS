#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct city
{
	char name[10];
	int code;
}ct[10];

int linearSearch(struct city a[10], int n, char nm[10])
{
	int i;
	for(i=0;i<n;i++)
		if(strcmp(a[i].name,nm)==0)
			return i;
	return -1;
}

int main()
{
	int n,i=0;pos;
	char ch,name[10];

	FILE *fp;
		printf("\n *****\n");		
	fp=fopen("cities.txt", "r");	
	if(fp==NULL)
	{
		printf("\n file not found\n");
		exit(0);
	}

	while(!feof(fp))
	{
		if(feof(fp)) break;
		fscanf(fp,"%s\t%d", ct[i].name,&ct[i].code);
		i++;
	}
	i--;

	printf("\ntotal cities =%d\n", i);
	fclose(fp);
	
	for(n=0;n<i;n++)
		printf("\n%d:%s\t%d", n, ct[n].name, ct[n].code);
	printf("\n");
	do
	{
		printf("\nElement city to be searched:");
		scanf("%s", name);
		pos=linearSearch(ct,i,name);
		if(pos==-1)	
			printf("\n%s not found in file", name);
		else
			printf("\n%s found in file at position %d\n", name,pos);
		printf("\n Do you want to search another city?(y/n):");
		scanf(" %c", &ch);
	}while(ch!='n');
}
