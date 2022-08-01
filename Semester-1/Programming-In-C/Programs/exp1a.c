#include <stdio.h>
void cir()
{
    double r;
    printf("Enter the radius of the circle \n");
    scanf("%lf",&r);
    printf("The area of circle is: %.2lf \n", (3.14*r*r));
    printf("The circumfrence of the circle is: %.2lf \n" ,(2*3.14*r));

}
void rhom()
{
    double s,d1,d2;
    printf("Enter the side length \n");
    scanf("%lf",&s);
    printf("Enter the diagnol 1 length \n");
    scanf("%lf",&d1);
    printf("Enter the diagnol 2 length \n");
    scanf("%lf",&d2);
    printf("The area of Rhombus is: %.2lf \n", (0.5*d1*d2));
    printf("The perimeter of the Rhombus is: %.2lf \n" ,(4*s));
}
int main()
{
    int n=0;
    printf("Select any following option \n");
    printf("1. Circle\n");
    printf("2. Rhombus\n");
    scanf("%d", &n);
    if(n==1){
        printf("Welcome to Circle \n");
        cir();
    }
    else if(n==2){
        printf("Welcome to Rhombus \n");
        rhom();
    }
    else
        printf("Enter a correct option only \n");
    return 0;
}