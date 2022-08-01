#include<stdio.h>
#include<stdlib.h>
int insert(int* arr1[], char* arr2[])
{
    int n;
    printf("\n\nEnter the number of players\n");
    scanf("%d",&n);
    printf("\n\n Enter Player name and Roll no\n");
    printf("eg Pargat 45\n");
    for (int i = 0; i < n; i++){
        arr1[i] = (int *)malloc(sizeof (int));
        arr2[i]= (char *)malloc(sizeof (char));
        scanf("%s %d",arr2[i],&arr1[i]);
    }
    return n;
}
void display(int* arr1[],char* arr2[],int n)
{
    printf("\n\nName\t\tRoll Number\n");
    for (int i = 0; i < n; i++)
        printf("%s\t\t%d\n",arr2[i],arr1[i]);
    
}
int main()
{
    int *arr1;
    char *arr2[10];
    int x=0, size;
    while(x!=4)
    {
        printf("\n\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            size=insert(arr1,arr2);
            break;
        case 2:
            //delete();
            break;   
        case 3:
            display(arr1,arr2,size);
            break;
        case 4:
            break;
        default:
            printf("Please Enter a correct option!\n");
            break;
        }
    }
    return 0;
}