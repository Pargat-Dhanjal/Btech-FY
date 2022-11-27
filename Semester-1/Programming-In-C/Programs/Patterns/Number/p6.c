#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 7
    1110111
    1110111
    1110111
    0000000
    1110111
    1110111
    1110111
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
            if (j == n/2 || i == n/2)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}