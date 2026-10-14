#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter the temprature in fahrenheit: \n");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32)*5/9;
    printf("The temprature in celsius is = %f", celsius);
    return 0;
}