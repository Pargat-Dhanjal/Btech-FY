#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 7
    1111111
    1000001
    1000001
    1000001
    1000001
    1000001
    1111111
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j == n-1 || i == n-1 || i == 0 || j == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}