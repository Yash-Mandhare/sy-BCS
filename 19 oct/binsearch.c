#include<stdio.h>
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
    for (i=0;i<n;i++)
    printf("%d\t",a[i]);
}

int binarysearch(int a[10],int lb,int ub,int ele)
{
    int mid;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==ele)
            return mid;
        else if(ele<a[mid])
            ub=mid-1;
        else lb=mid+1;
    }
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
        pos=binarysearch(arr,0,n,ele);
        if(pos==-1)
            printf("\n%d not found in array:");
        else 
            printf("\n%d found in array at position %d",ele,pos);
            printf("\n do You want to search another element? y/n:");
            scanf("%c",&ch);
    }while(ch!='n');

    return 0;
}