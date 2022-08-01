#include<stdio.h>
void patt1(int n)
{
    printf("First Pattern \n\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    printf("\n\n");
}
void patt2(int n)
{
    printf("Second Pattern \n\n");
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    printf("\n\n");
}
void patt3(int n)
{
    printf("Third Pattern \n\n");
    int count=1;
    int ii=1;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i*2;j++)
        printf(" ");
        ii=n-i+1;
        for(int j=1;j<=count;j++)
        {
            if(j>(count/2))
            printf(" %d",ii--);
            else
            printf(" %d",ii++);
        }
        printf("\n");
        count+=2;
        ii++;
    }
    printf("\n\n");
}
void patt4(int n)
{
    printf("Fourth Pattern \n\n");
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n;j++)
        printf(" ");
        for(int j=1;j<i*2;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<i*2;j++)
        {
            printf("*");
        }
        printf("\n");
        for(int j=i;j<=n;j++)
        printf(" ");
    }
    printf("\n\n");
}
void patt5(int n)
{
    printf("Fifth Pattern \n\n");
    for(int i=1;i<=n;i++)
    {
    char k='A';
        for(int j=1;j<=i;j++)
        printf("%c ",k++);
        printf("\n");
    }
    printf("\n\n");
}
int ncr(int n,int r)
{
    int ans=1;
    for(int i=n;i>0;i--)
    ans*=i;
    int ans1=1;
    for(int i=r;i>0;i--)
    ans1*=i;
    int ans2=1;
    for(int i=(n-r);i>0;i--)
    ans2*=i;
    return ans/(ans1*ans2);
}
void pass(int n)
{
    printf("Pascal's triangle Pattern \n\n");
    for(int i=0;i<n;i++)
    {
        for(int k=i;k<=n;k++)
        printf("  ");
        for(int j=0;j<=i;j++)
        printf(" %3d",ncr(i,j));
        printf("\n");
    }
    printf("\n\n");
}
int main()
{
    printf("Enter a Value for n\n");
    int n;
    scanf("%d",&n);
    patt1(n);
    patt2(n);
    patt3(n);
    patt4(n);
    patt5(n);
    pass(n);
    return 0;
}