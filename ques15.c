#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is Positive",a);
    }
    if(a<0)
    {
        printf("%d is Negative",a);
    }
    if(a==0)
    {
        printf("Zero");
    }
    getch();
    return 0;
}