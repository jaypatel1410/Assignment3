#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if((a/2)*2==a)
    {
        printf("%d is Even",a);
    }
    else
    {
        printf("%d is Odd",a);
    }
    getch();
    return 0;
}