#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,p,l,pp,lp;
    //cp:cost price,sp:selling price,p:profit,l:loss,pp:profit percentage,lp:loss percentage
    printf("Enter the Cost price and Selling price resp.\n");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(sp>cp)
    {
        printf("Profit of Ruppes :%f\n",p);
        pp=(p/cp*100);
        printf("The Profit percentage is %f",pp);
    }
    else
    {
        printf("Loss of Ruppes :%f \n",l);
        lp=(l/cp*100);
        printf("The loss percentage is %f",lp);
    }
    getch();
    return 0;
}