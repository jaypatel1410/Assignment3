#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a>0)
        printf("%d is Positive",a);
    else 
        printf("%d is Non Positive",a);
    getch();
    return 0;
}