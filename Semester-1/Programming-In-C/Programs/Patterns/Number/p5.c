#include <stdio.h>
#include <stdlib.h>
/*
    Enter n: 4
    1111
    1001
    1001
    1111
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n%2 == 0)
            {
                if ((i == n/2 -1 || i == n/2 ))
                {
                    if (j == n/2 -1 || j == n/2 )
                        printf("0");
                    else
                        printf("1");
                }
                else
                {
                    printf("1");
                }
            }
            else 
            {
                if(j==(n/2) && i==(n/2))
                    printf("0");
                else printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}