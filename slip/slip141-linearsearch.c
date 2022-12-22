/*Create a random array of n integers. Accept a value x from user and use
linear search algorithm to check whether the number is present in the
array or not and output the position if the number is present.*/


#include<stdio.h>
int lsearch(int a[10],int n,int num);
void generate(int num[10],int n);
void display(int num[10],int n);
int accept();
int main()
{
    int num[10],i,n,num1;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("\nThese are random numbers generated: ");
    generate(num,n);
    display(num,n);
    num1=accept();
    i=lsearch(num,n,num1);
    if(i==-1)
    printf("\nNumber not found\n");
    else printf("\nNumber found at %d location\n",i+1);
    return 0;
}
void generate(int num[10],int n)
{
    int i;
    for(i=0;i<n;i++)
        num[i]=rand()%100;
}
int lsearch(int a[10],int n,int num1)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==num1)
        return i;
    }
    return -1;
}
int accept()
{
    int x;
    printf("\nEnter the number you want to search: ");
    scanf("%d",&x);
    return x;
}
void display(int num[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}