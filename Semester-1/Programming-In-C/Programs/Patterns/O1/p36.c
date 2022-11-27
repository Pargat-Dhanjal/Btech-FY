#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 7
    1
    00
    111
    0000
    11111
    000000
    1111111
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
            if (i%2 == 0)
            printf("1");
            else 
            printf("0");
        }
        printf("\n");
    }
    return 0;
}