#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%10==a || a%100==a || a>=1000)
    {
        printf("%d is not a 3 digit number",a);
    }
    else
    { 
        printf("%d is a 3 digit number",a);
    }
    getch();
    return 0;
}