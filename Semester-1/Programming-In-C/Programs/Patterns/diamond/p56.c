#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 11
    1
    1 2 3
    1 2 3 4 5
    1 2 3 4 5 6 7
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8 9 10 11
    1 2 3 4 5 6 7 8 9 10
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8
    1 2 3 4 5 6 7
    1 2 3 4 5 6
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i+=2)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    for (int i = n-2; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}