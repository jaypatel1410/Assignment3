#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,p,f;
    printf("Enter the marks of 5 Subjects as a,b,c,d,e resp.\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<33||b<33||c<33||d<33||e<33)
    {
        printf("Fail");
    }
    else 
    {
        printf("Pass");
    }
    getch();
    return 0;
}