#include<stdio.h>
int main()
{
    float salary, CTC, employee_benefits;
    printf("Enter your CTC salary: \n");
    scanf("%f", &CTC);
    printf("Enter your employee benefits: \n");
    scanf("%f", &employee_benefits);
    salary = CTC - employee_benefits;
    printf("your gross salary is: %f", salary);
}