#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the month number\n");
    scanf("%d",&a);
    if((a%2==0 && a!=8 && a!=10 && a!=12 && a!=2) || a==9 || a==11)  
    {
        printf("There are 30 days in this month");
    }
    else if(a==2)
    {
        printf("There are 28 or 29 days in this month");
    }  
    else
    {
        printf("There are 31 days in this month");
    }
    getch();
    return 0;
}
//1,3,5,7,8,10,12 : 31 days
//4,6,9,11 : 30 days
//2 : 28 or 29 days