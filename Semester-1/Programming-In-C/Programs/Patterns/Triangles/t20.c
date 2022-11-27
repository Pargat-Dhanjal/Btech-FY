#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 6
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    6 6 6 6 6 6
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
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}