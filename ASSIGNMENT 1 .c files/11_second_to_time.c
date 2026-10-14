#include<stdio.h>
int main()
{
    int total_seconds, hours, minutes, seconds;
    printf("Enter total seconds: \n");
    scanf("%d", &total_seconds);
    hours = total_seconds/3600;
    minutes = total_seconds%3600/60;
    seconds = total_seconds-(hours*3600 + minutes*60);
    printf("Time is : \n");
    printf("%d hours %d minutes %d seconds", hours, minutes, seconds);
    return 0;
}