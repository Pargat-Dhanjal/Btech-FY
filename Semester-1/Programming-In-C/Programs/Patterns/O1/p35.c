#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 5
    1
    10
    101
    1010
    10101
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
            if (j%2 == 0)
            printf("1");
            else 
            printf("0");
        }
        printf("\n");
    }
    return 0;
}