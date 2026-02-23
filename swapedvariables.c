#include<stdio.h>
int main ()
{
    int a,b,t ;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("The swaped variables are a: %d and %d",a,b);
    return 0;
}