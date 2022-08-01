#include<stdio.h>
int main()
{
    printf("Enter the number of elements:\n");
    int len;
    scanf("%d",&len);
    int arr[++len];
    printf("Enter the list:\n");
    for(int i=0;i<len-1;i++)
    scanf("%d",&arr[i]);
    arr[len-1]=100000;
    // sorting elements
    for(int i=0;i<len;i++)
    {
        int mp=i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]<arr[mp])
            mp=j;
        }
        int temp=arr[i];
        arr[i]=arr[mp];
        arr[mp]=temp;
    }
    printf("\nData After sorting: \n");
    for(int i=0;i<len-1;i++)
    printf("%d ",arr[i]);
    printf("\n");
    int ele;
    printf("Enter the element you want to insert:\n");
    scanf("%d",&ele);
    //finding where to insert
    int pe=0;
    for(int i=len-2;i>=0;i--)
    {
        if(arr[i]<ele){
        pe=i+1;
        break;}
    }
    //inserting here
    for(int i=len;i>pe;i--)
    arr[i]=arr[i-1];
    arr[pe]=ele;
    //completed inserting
    printf("List after inserting and sorting:\n");
    for(int i=0;i<len;i++)
    printf("%d ",arr[i]);
    return 0;
}