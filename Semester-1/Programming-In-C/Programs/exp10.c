#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n=0;
void delete(int *a[],char *b[])
{
    char name[40];
    printf("\nEnter the name of the player you want to delete :- ");
    scanf("%s",name);
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(b[i],name)==0)
        {
            pos=i;
            free(a[pos]);
            free(b[pos]);
            break;
        }
    }
    n--;
    for(int j=pos;j<n;j++)
    {
        a[j]=a[j+1];
        b[j]=b[j+1];
    }
}
void insert(int *a[],char *b[])
{
    int n1;
    printf("\nEnter Number of Students: ");
    scanf("%d",&n1);
    printf("\nEnter Roll number and Name :- \n");
    printf("eg: 143 Pargat\n");
    for(int j=0;j<n1;j++,n++)
    {
        a[n]=(int *)malloc(sizeof(int));
        b[n]=(char *)malloc(sizeof(char));
        scanf("%d %s",a[n],b[n]);
    }
}
void print(int *a[],char *b[])
{
    printf("\n\nName\tRoll-No\n");
    for(int i=0;i<n;i++)
        printf("%d\t%s\n",*a[i],b[i]);
    printf("\n\n");
}

int main()
{
    int *a[10];
    char *b[10];
    int x=0;
    while(x!=4)
    {
        printf("\n\nList :\n");
        printf("1. Inserting\n");
        printf("2. Deleting\n");
        printf("3. Printing\n");
        printf("4. Exit\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1: insert(a,b);
                break;
            case 2: delete(a,b);
                break;
            case 3: print(a,b);
                break;
            case 4: printf("Exit\n");
                break;
            default: printf("Please Enter a correct Option\n");
                break;     
                                    
        }
    }
    
}