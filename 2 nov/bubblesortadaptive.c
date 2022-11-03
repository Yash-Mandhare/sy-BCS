#include <stdio.h>
void printArray(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
}

void bubbleSort(int arr[], int n)
{
    int i,temp,j;
    int isSorted = 0;
    for(i=0;i<n-1;i++)
    {
        printf("Working pass %d\n", i+1);
        isSorted=1;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                 isSorted=0;
            }
        }
       if(isSorted)
            return;
    }
    printf("\n");
}
int main() {
    
    int arr[]={56,72,2,45,89,0};
    //int arr[]={1,2,3,4,5,6};
    int n=6,i;
    printf("Before using Bubble Sorting, Array:\n");
    printArray(arr,n);
    bubbleSort(arr,n);
    printf("After Using Bubble Sorting, Array:\n");
    printArray(arr,n);
    //printf("Hello world");

    return 0;
}