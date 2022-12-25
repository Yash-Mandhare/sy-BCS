#include <stdio.h>
void print(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    //printf("Array before sorting");
    printf("\n");
    //printf("Array after sorting");
}
void bubble(int arr[], int n)
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

void insertionSort(int A[], int n){
    int key, j;
    // Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        // Loop for each pass
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

void selectionSort(int A[], int n){
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
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
    int arr[]={23,5,67,4,56,34};
    //int arr[]={1,2,3,4,5,6};
    int n=6;
    printf("Array before sorting\n");
    print(arr,n);
    bubble(arr,n);
    printf("Array after sorting\n");
    print(arr,n);
 //printf("Array after sorting");
    return 0;
}