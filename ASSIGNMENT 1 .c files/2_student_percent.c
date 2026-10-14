#include<stdio.h>
int main()
{
    float maths, science, english, sst, hindi, total, percentage;
    printf("Enter marks of English: \n");
    scanf("%f", &english);
    printf("Enter marks of Maths: \n");
    scanf("%f", &maths);
    printf("Enter marks of science: \n");
    scanf("%f", &science);
    printf("Enter marks of SST: \n");
    scanf("%f", &sst);
    printf("Enter marks of Hindi: \n");
    scanf("%f", &hindi);
    total = maths+science+hindi+sst+english;
    printf("Total marks of the student is : %f\n", total);
    percentage = total/5;
    printf("Percentage of the student is : %f\n", percentage);
    return 0;
}
