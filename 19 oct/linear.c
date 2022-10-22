#include<stdio.h>
#include <stdlib.h>  

void printarry(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}

void generate(int a[],int n)
{
    int i;

    for(i=0;i<n;i++)
    a[i]=rand()%50;

}

int linearsearch(int a[],int n,int x)
{
    int i, loc ;
    loc=-1;
    for(i=0;i,n;i++)
    if (a[i]==x)
    {
        loc=i;
        break;
    }
return loc;
}

int main()
{
int a[10];
int n,i,x,l;

    printf("\nEnter how many numbers:");
    scanf("%d",&n);

    generate(a,n);
    printarry(a,n);

    printf("\nEnter Number to be searched:");
    scanf("%d",&x);

    l=linearsearch(a,n,x);

    if(l==-1)
        printf("\n Number not found");
    else
        printf("\n %d found at %d location",x,l);

return 0;

}
