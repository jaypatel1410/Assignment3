#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number to check whether a number is Even or Odd\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is Even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
    getch(); 
    return 0;
}