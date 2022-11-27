// Pattern 8 and 9 skipped

#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 7
    1 1 1 1 1 1 1
    2 2 2 2 2 2 2
    3 3 3 3 3 3 3
    4 4 4 4 4 4 4
    5 5 5 5 5 5 5
    6 6 6 6 6 6 6
    7 7 7 7 7 7 7
*/
int main()
{
    printf("Enter n: ");	
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
    }
}