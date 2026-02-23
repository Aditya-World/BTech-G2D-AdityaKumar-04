#include<stdio.h>
int main ()
{
    int phy,chem,maths,eng,cs,sum,percent;
    printf("Maximum marks should be 100\n");

    /* read each mark with validation */
    do {
        printf("Enter the marks of PHYSICS: ");
        scanf("%d", &phy);
        if (phy < 0 || phy > 100)
            printf("ERROR! please enter a value between 0 and 100.\n");
    } while (phy < 0 || phy > 100);

    do {
        printf("Enter the marks of CHEMISTRY: ");
        scanf("%d", &chem);
        if (chem < 0 || chem > 100)
            printf("ERROR! please enter a value between 0 and 100.\n");
    } while (chem < 0 || chem > 100);

    do {
        printf("Enter the marks of MATHS: ");
        scanf("%d", &maths);
        if (maths < 0 || maths > 100)
            printf("ERROR! please enter a value between 0 and 100.\n");
    } while (maths < 0 || maths > 100);

    do {
        printf("Enter the marks of ENGLISH: ");
        scanf("%d", &eng);
        if (eng < 0 || eng > 100)
            printf("ERROR! please enter a value between 0 and 100.\n");
    } while (eng < 0 || eng > 100);

    do {
        printf("Enter the marks of COMPUTER SCIENCE: ");
        scanf("%d", &cs);
        if (cs < 0 || cs > 100)
            printf("ERROR! please enter a value between 0 and 100.\n");
    } while (cs < 0 || cs > 100);

    sum = phy + chem + maths + eng + cs;
    percent = sum / 5;
    printf("Sum of given Marks are: %d and Percentage is %d", sum, percent);
    return 0;
}