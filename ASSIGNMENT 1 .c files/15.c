#include <stdio.h>
int main()
{
    float s1, s2, s3, s4, s5, total, percentage;
    printf("Enter the marks of 5 subjects: \n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);
    total=s1+s2+s3+s4+s5;
    percentage=total/5;
    printf("Total marks=%.2f\n", total);
    printf("Total percentage=%.2f\n", percentage);
    if(percentage>=70)
    {
        printf("GRADE A");
    }
    else if(percentage>=50 && percentage < 70)
    {
        printf("GRADE B");
    }
    else if(percentage>=35 && percentage<50)
    {
        printf("GRADE C");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}