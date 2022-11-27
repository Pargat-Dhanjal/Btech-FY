#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 5
    1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
    1 2 3 4 3 2 1
    1 2 3 2 1
    1 2 1
    1
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",j+1);
        }
        for(int j = i; j > 0; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",j+1);
        }
        for(int j = i; j > 0; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}