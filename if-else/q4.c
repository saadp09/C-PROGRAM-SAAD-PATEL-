#include <stdio.h>

int main()
{

    int a, b, c, d;
    printf("ENTER THE VALUE OF A:-");
    scanf("%d", &a);

    printf("ENTER THE VALUE OF B:-");
    scanf("%d", &b);

    printf("ENTER THA VALUE OF C :-");
    ;
    scanf("%d", &c);

    printf("ENTER THE VALUE OF D:-");
    scanf("%d", &d);

    if (a >= b)
    {
        if (a >= c)

            if (a > d)
            {
                printf("a is max");
            }
            else
            {
                printf("d is max");
            }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("b is max");
        }
        else
        {
            printf("d is max");
        }
    }
    else if (c > d)
    {
        printf("c is max");
    }
    else
    {
        printf("d is max");
    }
}