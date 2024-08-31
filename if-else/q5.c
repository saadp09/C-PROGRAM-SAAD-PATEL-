#include <stdio.h>

int main()
{

    int a, b, c;
    printf("ENTER A VALUE:-\n");
    scanf("%d", &a);

    printf("ENTER B VALUE:-\n");
    scanf("%d", &b);

    printf("ENTER C VALUE:-\n");
    scanf("%d", &c);

    if (a <= b)
    {
        if (a <= c)
        {
            printf("a is min\n");
        }
        else
        {
            printf("b is min\n");
        }
    }
    else
    {
        if (b <= c)

        {
            printf("b is min\n");
        }

        else
        {
            printf("c is min\n");
        }
    }
}