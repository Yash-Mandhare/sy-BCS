/*Read the data from file 'cities.txt' containing names of cities and their STD codes.
 Accept a name of the city from user and use sentinel linear search algorithm to
  check whether the name is present in the file and output the STD code, otherwise output “city not in the list”.*/


#include<stdio.h>
#include<string.h>
 
typedef struct city
{
                char cname[20];
                int stdcode;
}rec;
rec city[100];
int read_file(rec *a)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("cities.txt","r"))!=NULL)
                {
                                while(!feof(fp))
                                {
                                                fscanf(fp,"%s%d",a[i].cname,&a[i].stdcode);
                                                i++;
                                }}
                return (i-1);
}
 
void l_search(rec *a,int n,char x[20])
{
                int i;
                for(i=0;i<n;i++)
                {
                                if(strcmp(a[i].cname,x)==0)
                                {
                                                printf("\nSTD Code\n%d\n",a[i].stdcode);
                                                break;
                                }
                }
                if(i==n)
                                printf("\nCity not in the list\n");
}
 
void main()
{
                char x[20];
                int n;
                n=read_file(city);
                printf("Enter city name\n");
                 gets(x);
                l_search(city,n,x);
}