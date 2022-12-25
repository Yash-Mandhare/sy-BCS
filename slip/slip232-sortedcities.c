//Reading from file

#include<stdio.h>

#include<string.h>

typedef struct city

{

    char name[20];

    int code;

} city;



//Fileread

int fileread(city a[20])

{

    FILE *fp;

    int i=0;



    fp=fopen("sortcities.txt","r");

    if(fp==NULL)

        printf("File Not Exist");

    else

    {

        while(!feof(fp))

        {

            fscanf(fp,"%s%d", a[i].name, &a[i].code);

            i++;

        }

        fclose(fp);

    }

    return i-1;

}



//Main

int main()

{

    int i, n,flag=0;

    char key[20];

    city a[20];

    n = fileread(a);



    for(int i=0; i<n; i++)

        printf("%s %d\n", a[i].name, a[i].code);



    binarysearch(0,n-1);

}



void binarysearch(int low,int high)

{

    int n;

    char key[20];

    city a[20];

    n=fileread(a);

    int mid;

    printf("\nEnter City: ");

    scanf("%s",&key);



    while(low<=high)

    {

        mid=(low+high)/2;

        if(strcmp(key,a[mid].name)==0)

        {



            printf("City Code: %d",a[mid].code);

            exit(0);

        }

        else if(strcmp(key,a[mid].name)>0)

        {

            high=high;

            low=mid+1;

        }

        else

        {

            low=low;

            high=mid-1;

        }

    }



    printf("City Not In List\n");

}