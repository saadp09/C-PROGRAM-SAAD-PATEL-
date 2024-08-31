#include <stdio.h>
int main()
{
    int i, count = 0, num;
    printf("enter number:-");
    scanf("%d", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("number count of is %d", count);
    return 0;
}
