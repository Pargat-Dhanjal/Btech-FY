#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 4 
    4
    3 4
    2 3 4
    1 2 3 4
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = n; i > 0 ; i--)
    {
        for (int j = i; j <=n; j++)
        {
            printf("%d ",j);	
        }
        printf("\n");
    }
}