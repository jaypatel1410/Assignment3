#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number to check whether the entered number is divisible by 5 or not\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("%d is divisible by 5",a);
    }
    else
    {
        printf("%d is not divisible by 5",a);
    }
    getch();
    return 0;
}