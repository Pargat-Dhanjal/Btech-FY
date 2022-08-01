#include<stdio.h>
#include<string.h>
struct players
{
    char name[20];
    int matchPlayed;
    int bowFig;
};
struct players arr[5];
void sort()
{   //selection sort
    for(int i=0;i<5;i++)
    {
        int max=i;
        for(int j=i;j<5;j++)
        {
            if(arr[max].bowFig<=arr[j].bowFig){     //the bowling is given the priority
                if(arr[max].bowFig==arr[j].bowFig)  // if the bowling figure is same then 
                max=(arr[max].matchPlayed>arr[j].matchPlayed)?max:j;    // compare matches played
                else
                max=j;
            }
        }
        struct players temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
    }
}
void display(int n){
    printf("\nName\tMatches\tBowling fig.\n\n");
        for(int i=0;i<n;i++)
            printf("%s\t%d\t%d\n",arr[i].name,arr[i].matchPlayed,arr[i].bowFig);
}
int search(char name[20],int n)
{   //linear search
    for(int i=0;i<n;i++)
        if(strcmp(arr[i].name,name)==0)
            return i;
    return -1;
}
void delete(int n)
{
    while(n++<5)
        arr[n-1]=arr[n];
}
int main()
{
    printf("Enter the Data\n"); //inseritng data
    for(int i=0;i<5;i++)
    {
        printf("\n\nEnter Player name: ");
        scanf("%s",arr[i].name);
        printf("Enter %s's Matches played: ",arr[i].name);
        scanf("%d",&arr[i].matchPlayed);
        printf("Enter %s's Bowling Figure: ",arr[i].name);
        scanf("%d",&arr[i].bowFig);
    }
    int tt=1,size=5; // using tt as break element. Size is set to 5
    while(tt==1)
    {
        printf("\n\n1. Sort and Display\n");
        printf("2. Delete a player\n");
        printf("3. Search a player\n");
        printf("4. Exit\n\n\n");
        int num;
        scanf("%d",&num);
        switch(num){
        case 1:
            sort(); //sorting data
            display(size);
            break;
        case 2:
            printf("\n Enter which player you want to delete: ");
            char s[10];
            scanf("%s",s);
            int n=search(s,size); //searching the postion of the element to be deleted
            if(n!=-1){
            delete(n);  //deleting the searched element
            --size;
            printf("Player Deleted\n");}    //decresing the size of array
            else
            printf("Player to be deleted not found!\n");
            break;
        case 3:
            printf("\nEnter the player you want to search: ");
            char name[20];
            scanf("%s",name);
            int ans=search(name,size);
            if(ans!=-1)
                printf("%s\t%d\t%d\n",arr[ans].name,arr[ans].matchPlayed,arr[ans].bowFig);
            else
            printf("Player Not Found!\n");
            break;
        case 4:
            tt=0;
            break;
        default:
            printf("Please Select a correct option\n\n");
        }
    }
    return 0;
}