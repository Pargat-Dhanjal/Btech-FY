#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 7
    1
    11
    101
    1001
    10001
    100001
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
            if (j == 0 || j == i || i == n-1)
            printf("1");
            else 
            printf("0");
        }
        printf("\n");
    }
}