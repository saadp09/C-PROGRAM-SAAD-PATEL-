#include <stdio.h>

int main()
{

    int age;
    printf("enter age:-");
    scanf("%d", &age);
    printf("\nyou have entred %d as your age", age);

    if (age >= 18)
    {
        printf("\nyou can vote");
    }

    else if (age>=10)
     { 
         printf("\nyou are between 10 to 18\n you can vote for kids");
     }
     else
       { 
        printf("\nyou cannot vote");
       }

        return 0;
    }