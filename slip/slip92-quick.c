/*Read the data from the ‘employee.txt’ file and sort on age using 
Counting sort and Quick sort and write the sorted data to another file 'sortedemponage.txt'.*/


#include <stdio.h>
#include <stdlib.h>
struct employee
{
int age;
};
int cntRec(char fnm[])
{
int n=0,age;
FILE *fp;
fp = fopen(fnm,"r");
while( fscanf(fp,"%d",&age) != EOF )
n++;
fclose(fp);
return n;
}
void Quick_Sort(struct employee *emp,int lb,int ub)
{
if( lb < ub )
{
int p;
p = Partition(emp, lb, ub);
Quick_Sort(emp, lb, p-1);
Quick_Sort(emp, p+1, ub);
}
}
void sort(struct employee *emp, int n)
{
Quick_Sort(emp,0,n-1);
}
 
int Partition(struct employee *emp, int lb, int ub)
{
struct employee temp = emp[lb];
int down, up;
down = lb;
up = ub;
while( down < up )
{
while( down <= ub && emp[down].age <= temp.age ) down++;
while( emp[up].age > temp.age ) up--;
if( down < up )
{
struct employee t = emp[down];
emp[down] = emp[up];
emp[up] = t;
}
}
emp[lb] = emp[up];
emp[up] = temp;
return up;
}
void fetchRec(struct employee *emp, char fnm[])
{
FILE *fp;
int i=0;
fp = fopen(fnm,"r");
while( fscanf(fp,"%d",&emp[i].age) != EOF )
i++;
fclose(fp);
}
void updateFile(struct employee *emp, int n, char fnm[])
{
int i;
FILE *fp;
fp = fopen(fnm,"w");
for(i=0; i<n; i++)
fprintf(fp,"%d\n",emp[i].age);
fclose(fp);
}
int main()
{
int n=0;
struct employee *emp;
n = cntRec("slip92-employee.txt");
emp = malloc(sizeof(struct employee) * n );
fetchRec(emp,"slip92-employee.txt");
sort(emp,n);
updateFile(emp,n,"sortedemponage.txt");
}
