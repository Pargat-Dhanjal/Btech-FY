#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 4
    1001
    0110
    0110
    1001
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
            if (j==i || j == (n-i-1))
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}