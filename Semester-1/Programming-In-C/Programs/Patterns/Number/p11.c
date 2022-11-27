#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 3
    1 2 3
    1 2 3
    1 2 3
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
            printf("%d ",j+1);
        }
        printf("\n");
    }
}