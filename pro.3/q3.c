#include <stdio.h>
int main()
{
    int firstAngle, secondAngle, thirdAngle;
    printf("enter the value of first angle:-");
    scanf("%d",&firstAngle);

    printf("enter the value of second angle:-");
    scanf("%d",&secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);
    printf("thirdAngle:%d\n", thirdAngle);

    return 0;
}