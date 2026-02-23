#include<stdio.h>
int main ()
{
    int n,evensum=0,oddsum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        if (i%2==0){
            evensum+=i;
        }
        else {
            oddsum+=i;
        }
       
    }
     printf("sum of odd numbers : %d\n",oddsum);
     printf("sum of even numbers :%d",evensum);

    return 0;
}