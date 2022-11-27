#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 6
    6 6 6 6 6 6
    5 5 5 5 5
    4 4 4 4
    3 3 3
    2 2
1
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = n; i > 0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ",i);	
        }
        printf("\n");
    }
}