#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 6
    1 3 5 7 9 11 13
    1 3 5 7 9 11
    1 3 5 7 9
    1 3 5 7
    1 3 5
    1 3
    1
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = n; i >=0 ; i--)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%d ",j*2 + 1 );	
        }
        printf("\n");
    }
}