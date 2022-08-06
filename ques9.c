#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is Greatest",a);
    }
    if(b>a && b>c)
    {
        printf("%d is Greatest",b);
    }
    if(c>a && c>b)
    {
        printf("%d is Greatest",c);
    }
    getch();
    return 0;
}