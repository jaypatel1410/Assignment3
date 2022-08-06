#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,D;
    printf("Enter the value of a b and c resp. in the quadratic equation a*x*x + b*x + c = 0\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("According to the values entered the equation will be %.2f x^2 + %.2f x + %.2f = 0\n\n",a,b,c);
    printf("For knowing nature of the roots of the equation we need to calculate Discriminant i.e D\n\n");
    D = (b*b)-(4*a*c);
    if(D>0)
    {
        printf("The equation has two Real and Distinct");
    }
    if(D==0)
    {
        printf("The equation has two equal Real roots");
    }
    if(D<0)
    {
        printf("The equation has two complex roots");
    }
    getch();
    return 0;
}