#include <stdio.h>
#include<math.h>
int main()
{
    double p,r,n;

    printf("Enter Principal: ");
    scanf("%lf", &p);
    printf("Enter Rate of Intrest: ");
    scanf("%lf", &r);
    printf("Enter Time: ");
    scanf("%lf",&n);
    double num=p*r*(pow((1+r),n));
    double den=(pow((1+r),n))-1;
    printf("The EMI is : %.2lf",(num/den));
    return 0;
}