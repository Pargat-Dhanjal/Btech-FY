#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 6 
    1 2 3 4 5 6
    2 3 4 5 6 7
    3 4 5 6 7 8
    4 5 6 7 8 9
    5 6 7 8 9 10
    6 7 8 9 10 11
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
            printf("%d ",j+i+1);
        }
        printf("\n");
    }
}