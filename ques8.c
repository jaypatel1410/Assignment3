#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the year\n");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) || a%400==0)
    {
        printf("Entered year %d is a Leap Year",a);
    }
    else
    {
        printf("Entered year %d is NOT a Leap Year",a);
    }
    getch();
    return 0;
}