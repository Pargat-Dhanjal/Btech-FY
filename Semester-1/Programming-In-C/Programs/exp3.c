#include <stdio.h>
void palin()
{
    int n;
    printf("Enter a num to check for Palindrome: ");
    scanf("%d",&n);
    int n1=n,k=0,ans=0;//n1=121
    while(n>0) //0
    {
        k=n%10;//1
        ans=ans*10+k;//121
        n=n/10;//0
    }
    if(ans==n1)
    printf("The Number is a Palindrome");
    else
    printf("The Number is not a Palindrome");
}
void fibo()
{
    int n=0;
    printf("Enter the nth term for fibonacci series: ");
    scanf("%d",&n);
    if(n==1)        printf("0");
    else if(n==2)   printf("0 1");
    else if(n>2)
    {
        n-=2;
        int a=0,b=1,k=0;
        printf("%d %d",a,b);
        do
        {
            k=a+b;
            a=b;
            b=k;
            printf(" %d",b);
            n--;
        }
        while (n>0);
        
    }
}
void sumnum()
{
    int sum=0;
    printf("The Numbers are :\n");
    for(int i=100;i<200;i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nThe Sum is : %d",sum);
}
int main()
{
    int n=0;
    printf("1. Palindrome\n");
    printf("2. Fibonacci\n");
    printf("3. Find the numbers and sum of all int btw 100 and 200, div by 3 and 5\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        palin();
        break;
    case 2:
        fibo();
        break;
    case 3:
        sumnum();
        break;
    default:
    printf("Enter a correct option only");
        break;
    }
    return 0;
}