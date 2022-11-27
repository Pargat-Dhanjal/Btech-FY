#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 7
    7 6 5 4 3 2 1 
    6 5 4 3 2 1 
    5 4 3 2 1 
    4 3 2 1 
    3 2 1 
    2 1 
    1 
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = n; i > 0 ; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d ",j);	
        }
        printf("\n");
    }
}