#include <stdio.h>

int main()
{
    int x, y, z;

    printf("ENTER X VALUE:-");
    scanf("%d", &x);

    printf("ENTER Y VALUE:-");
    scanf("%d", &y);

    printf("ENTER Z VALUE:-");
    scanf("%d", &z);

    if (x >= y)
    {

        if (x >= z)
        {
            printf("x is max");
        }
        else
        {
            printf("z is max");
        }
    }
    else
    {
        if (y >= z)
        {
            printf("y is max");
        }
        else
        {
            printf("z is max");
        }
    }
    return 0;
}