#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int c=0;
    float a;

    //Prompt user for amount of change
    do
    {
        a=get_float("Amount of change: ");
    }
    while(a<0);
    int n=round(100*a);
   // printf("%d",n);
    while(n>=25)
    {
        c++;
        n=n-25;
    }
    while(n>=10)
    {
        c++;
        n=n-10;
    }
    while(n>=5)
    {
        c++;
        n=n-5;
    }
    while(n>=1)
    {
        c++;
        n=n-1;
    }
    printf("%i\n",c);
}