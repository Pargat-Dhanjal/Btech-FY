#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Integers: ");
    scanf("%d %d %d",&a,&b,&c);
    int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The maximum value is (using ternary): %d\n",max);
    max=0;
    if(a>b)
    {
        if(a>c)
        max=a;
        else
        max=c;
    }
    else
    {
        if(b>c)
        max=b;
        else
        max=c;
    }
    printf("The maximum value is (using if else): %d\n",max);
}