#include<stdio.h>
#include<cs50.h>
int main(void)
{
    //Prompt user for his/her name
    string s=get_string("Enter your name: ");
    printf("Hello, %s",s);
}