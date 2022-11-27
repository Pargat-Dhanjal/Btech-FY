#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 8
    11111111
    00000000
    11111111
    00000000
    11111111
    00000000
    11111111
    00000000
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
            if(i%2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    return 0;
}