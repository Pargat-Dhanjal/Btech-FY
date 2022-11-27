#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 6
    1 2 3 4 5 6
    7 8 9 10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
    25 26 27 28 29 30
    31 32 33 34 35 36
*/
int main()
{
    printf("Enter n: ");	
    int n;
    scanf("%d",&n);
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",p++);
        }
        printf("\n");
    }
}