#include<stdio.h>
void matinp(int n,int m,int arr[n][m])  //mattrix input
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
}
int main()
{
    int n,m,p,q;
    printf("Enter size of matrix 1\n");
    scanf("%d%d",&n,&m);
    printf("Enter size of matrix 2\n");
    scanf("%d%d",&p,&q);
    if(m!=p)
    printf("The matrices cannot be multiplied");
    else
    {
        int arr1[n][m];
        int arr2[p][q];
        printf("Enter first Matrix\n");
        matinp(n,m,arr1);
        printf("Enter second Matrix\n");
        int multi[n][q];
        matinp(p,q,arr2);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<q;j++)
            {
                int temp=0;
                for(int k=0;k<m;k++)
                    temp+=arr1[i][k]*arr2[k][j];    //multi the two and adding them in temp
                multi[i][j]=temp;
            }
        }
        printf("\n\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<q;j++)
            printf("%d ",multi[i][j]);
            printf("\n");
        }
    }
}