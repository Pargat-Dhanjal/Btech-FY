#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 7
    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9
    6 7 8 9 10 11
    7 8 9 10 11 12 13
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",j+i+1);	
        }
        printf("\n");
    }
}