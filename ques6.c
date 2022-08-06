#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x;
    printf("Enter any two numbers\n");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf("Both the values are equal i.e %d",a);
    }
    else
    {
        x=a>b?a:b;//using conditional operator 
        printf("%d is greater",x);
    }
    getch();
    return 0;
}

/*
    *****Another Way Of Writing It*****

    if(a>b)
    {
        printf("%d is greater",a);
    }
    if(a<b)
    {
        printf("%d is greater",b);
    }
    if(a==b)
    {
        printf("You entered equal values i.e %d",a);
    }
*/
