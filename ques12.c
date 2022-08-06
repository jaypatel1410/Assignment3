#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter any character value\n");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    printf("Charater is UpperCase");
    if(x>=97 && x<=122)
    printf("Character is LowerCase");
    getch();
    return 0;
}