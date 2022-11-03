#include<stdio.h>

void print(int a[],int n ){

int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
}
void selectionSort(int A[], int n){
    int indexOfMin, temp, i, j;
    printf("Running Selection sort...\n");
    for (i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[indexOfMin]
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
int main()
{
int a[] = {12,54,65,7,23,9};
int n = 6;
print(a,n);
selectionSort(a,n);
print(a,n);
return 0;
}
