#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int n;
    //Prompts user for height
    do
    {
        n=get_int("Enter height: \n");
    }while(n<0 || n>=24);

    //Print the pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1;j++)
        {
            if(j<=n-i)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}