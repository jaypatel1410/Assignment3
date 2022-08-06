#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of the sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c || a+c>b || b+c>a)
    {
        printf("The Traingle is valid");
    }
    else 
    {
        printf("The Traingle is invalid");
    }
    getch();
    return 0;
}