#include<stdio.h>
int main()
{
    float C,F ;
    printf("Ënter the temperature in degree Celcius");
    scanf("%f",&C);
    F = (9*(C/5))+32;
    printf("Given temperature in degree Fahrenheit is %f",F);
    return 0;
}