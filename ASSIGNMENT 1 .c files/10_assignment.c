#include <stdio.h>
int main()
{
    float M, P, C, E, total_marks, CM;
    printf("Enter marks of maths :\n");
    scanf("%f", &M);
    printf("Enter marks of physics :\n");
    scanf("%f", &P);
    printf("Enter marks of chemistry :\n");
    scanf("%f", &C);
    printf("Enter marks of Entrance exam :\n");
    scanf("%f", &E);
    if(M<=200)
    printf("Marks obtained in Maths is : %f\n", M);
    else
    printf("Not valid\n");
    if(P<=200)
    printf("Marks obtained in Physics is : %f\n", P);
    else
    printf("Not valid\n");
    if(C<=200)
    printf("Marks obtained in Chemistry is : %f\n", C);
    else
    printf("Not valid\n");
    if(E<=100)
    printf("Marks obtained in Entrance exam is : %f\n", E);
    else
    printf("Not valid\n");
    CM = M/2 + P/2 + C/2 + E;
    if(M<=200 && P<=200 && C<=200 && E<=100)
    printf("Cut off marks of student is : %f", CM);
    else
    printf("CUT OFF MARKS : INVALID\n");
    return 0;
}