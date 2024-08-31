#include <stdio.h>
int main()

{
    int baseSalary, HRA_percantage, DA_percantage, TA_percantage, grossSalary;
    printf("enter the base salary:-");
    scanf("%d", &baseSalary);

    HRA_percantage = baseSalary + 10 / 100;
    DA_percantage = baseSalary + 5 / 100;
    TA_percantage = baseSalary + 8 / 100;

    grossSalary = baseSalary + HRA_percantage + DA_percantage + TA_percantage;
    printf("the gross salary is%d", grossSalary);

    return 0;
}