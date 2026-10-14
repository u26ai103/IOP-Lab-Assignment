#include<stdio.h>
int main()
{
    float seconds, days, hours, minutes;
    seconds = 31558150;
    minutes = seconds/60;
    hours = minutes/60;
    days = hours/24;
    printf("Total number of days in a year is: %f\n", days);
    printf("total no. of hours in a years is: %f\n", hours);
    printf("total no. of minutes in a year is : %f\n", minutes);
    return 0;
}