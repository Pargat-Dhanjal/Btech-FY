#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 5
    5
    4 4
    3 3 3
    2 2 2 2
    1 1 1 1 1
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", (n-i));	
        }
        printf("\n");
    }
}