#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 5
    11111
    11111
    11111
    11111
    11111
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
            printf("1");
        }
        printf("\n");
    }
    return 0;
}