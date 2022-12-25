/*Sort a random array of n integers (accept the value of n from user) in
ascending order by using quick sort algorithm.*/

#include<stdio.h>
void display(int num[10],int n);
void generate(int num[10],int n);
void qsort(int arr[10],int low,int high);
int main()
{
    int num[10],n;
    printf("Enter how many numbers: ");
    scanf("%d",&n);
    generate(num,n);
    printf("\nThese are random numbers generated: ");
    display(num,n);
    printf("\n");
    qsort(num,0,n-1);
    printf("After sorting: ");
    display(num,n);
    return 0;
}
void generate(int num[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        num[i]=rand()%100;
}
void display(int num[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",num[i]);
}
void qsort(int arr[10],int low,int high)
{
    int pivot,i,j,temp;
    if(low<high)
    {
       pivot=low;
 
       i=low+1;
       j=high;
       while(i<=j)
           {
           while(arr[i]<=arr[pivot] && i<=high)
              i++;
           while(arr[j]>arr[pivot] && j>=low)
                  j--;
           if(i<j)
           {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           }
           }
       temp=arr[j];
           arr[j]=arr[pivot];
       arr[pivot]=temp;
            
       qsort(arr,low,j-1);
       qsort(arr,j+1,high);
       }
}
