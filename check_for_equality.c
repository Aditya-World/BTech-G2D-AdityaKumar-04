#include<stdio.h>
int main ()
{
    int num1,num2 ;
    printf("Enter two numbers to check for equality:");
    scanf("%d %d",&num1,&num2);
    if (num1==num2)
    {
        printf("Entered numbers is equal");
    }
    else {
        printf("Entered number is not equal");
    }
    return 0;
}