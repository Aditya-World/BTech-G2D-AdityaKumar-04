#include <stdio.h>
int main()
{
    int r ;
    float area,circumference ;

    printf("Enter radius of Circle :");
    scanf("%d",&r);

    area = 3.14*r*r;
    circumference = 2*3.14*r;

    printf("The area of Circle is %f ",area);
    printf("The Circumference of Circle is %f ",circumference);
    return 0;
}