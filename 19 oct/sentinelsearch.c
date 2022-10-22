#include<stdio.h>
#include <stdlib.h>  

void accept(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&a[i]);
    }
}

void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}

int sentinelsearch(int arr[10],int n,int ele)
{
    int i=0;
    int last=arr[n-1];
    arr[n-1]=ele;
    while(arr[i]!=ele)
        i++;
    arr[n-1]=last;
    if(i<(n-1)) || arr[n-1]==ele;
        return i;
        return -1;
}

int main()
{
    int n,i,pos,arr[10],ele;
    char ch;

    printf("how many elements in array:");
    scanf("%d",&n);
    accept(arr,n);
    display(arr,n);
do 
    {
        printf("Element to be searched:");
        scanf("%d",ele);
        pos=sentinelsearch(arr,n,ele);
        if(pos==-1)
            printf("\n%d not found in array:");
        else 
            printf("\n%d found in array at position %d",ele,pos);
            printf("\n do You want to search another element? y/n:");
            scanf("%c",&ch);
    }while(ch!='n');

    return 0;
}
