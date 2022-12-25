#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void generate(int a[10],int n)
{
	int rand();
	int i;
	for(i=0;i<n;i++)
		a[i]=rand()%100;
}

void accept(int a[10],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d:",i+1);
		scanf("%d",&a[i]);
	}
}
void display(int a[10],int n)
{
	int i;
	printf("you entered\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}

int linearSearch(int a[10],int n,int ele)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]==ele)
			return i;
	return -1;
}

int sentinelSearch(int a[10],int n,int ele)
{
	int i=0;
	int last=a[n-1];
	a[n-1]=ele;
	while(a[i]!=ele)
		i++;
	a[n-1]=last;
	if(i<(n-1) || a[n-1]==ele)
		return i;
	return -1;
}

int binarySearch(int a[10],int lb,int ub,int ele)
{
	int mid;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==ele)
			return mid;
		else if(ele < a[mid])
			ub=mid-1;
		else lb=mid+1;
	}
	return -1;
}

int main()
{
	int n,i,pos,arr[10],ele;
	char ch;
	
	printf("How many elements in array:");
	scanf("%d",&n);
	generate(arr,n);
	display(arr,n);
	do
	{
		printf("Element to be searched:");
		scanf("%d",&ele);
		pos=linearSearch(arr,n,ele);
		if(pos==-1)
			printf("\n%d not found in array",ele);
		else
			printf("\n%d found in array at position %d",ele,pos);
		printf("\n Do u want to search another element?(y/n):");
		scanf(" %c",&ch);
	}while(ch!='n');
}


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
	int n,i=0 ,pos;
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