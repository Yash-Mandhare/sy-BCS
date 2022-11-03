#include<stdio.h>

void print(int a[],int n ){

int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
}
void insertionsort(int a[],int n){
	int key,i, j;
	for(i=1;i<=n-1;i++)
	{
		key = a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] =key;
	}
}
int main()
{
int a[] = {12,54,65,7,23,9};
int n = 6;
print(a,n);
insertionsort(a,n);
print(a,n);
return 0;
}
