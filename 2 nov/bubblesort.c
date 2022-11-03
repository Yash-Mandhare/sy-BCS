#include <stdio.h>
void print(int arr[],int n)
{
 int i;
 for(i=0;i<n;i++)
{printf("%d\n ",arr[i]);
	}
}
void bubble(int arr[],int n)
{
int temp,i,j;
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(arr[j]>arr[j+1])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;	
			}	
		}
	}
	
}
int main()
{
int arr[]={23,5,67,4,56,34};
int n=6;
printf("Array before sorting\n");
print(arr,n);
bubble(arr,n);
printf("Array after sorting \n");
print(arr,n);
return 0;
}
