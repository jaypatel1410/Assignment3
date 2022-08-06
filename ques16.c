#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter any character value\n");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        {
            printf("Charater is UpperCase");
        }
        else if(x>=97 && x<=122)
        {
            printf("Character is LowerCase");
        }
        else if(x>=48 && x<=57)
        {
            printf("Digits");
        }
    else
    {
        printf("Special Characters");
    }
    getch();
    return 0;
}