#include <stdio.h>
int main()
{
    float time, hours, minutes, seconds, total_seconds;
    printf("Enter hours:\n");
    scanf("%f", &hours);
    printf("Enter minutes:\n");
    scanf("%f", &minutes);
    printf("Enter seconds:\n");
    scanf("%f", &seconds);
    total_seconds = ((hours*60)*60)+(minutes*60)+seconds;
    printf("Total time in seconds is : %f", total_seconds);
    return 0;
}