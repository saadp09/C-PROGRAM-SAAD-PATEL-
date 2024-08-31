#include <stdio.h>
int main()

{

    int i, num, first, last;
    printf("enter number:-");
    scanf("%d", &num);

    last = num % 10;
    while (num != 0)
        
    {
        first = num;
        num = num / 10;
    }
    printf("\nfirst num is: %d and last num:%d", first, last);
    printf("\nsum of first and last digit is:%d", first + last);
    return 0;
}
