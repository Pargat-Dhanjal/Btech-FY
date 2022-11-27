#include <stdio.h>
#include <stdlib.h>

/*
    Enter n: 5
    1
    12
    123
    1234
    12345
    1234
    123
    12
    1
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
            printf("%d",j+1);
        }
        printf("\n");
    }
    for (int i = n-2; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}