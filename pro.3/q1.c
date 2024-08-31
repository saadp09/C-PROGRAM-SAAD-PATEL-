#include <stdio.h>

float celsius_to_fahrenheit(float celsius)
{
    return (9.0 / 5.0 * celsius) + 32.0;
}
int main()

{
    float celsius, fahrenheit;
    printf("enter tempreture:- ");
    scanf("%f", &celsius);

    fahrenheit = celsius_to_fahrenheit(celsius);
    printf("%.2f degree celsius is equal to %.2f degree fahrenheit.\n", celsius, fahrenheit);

    return 0;
}