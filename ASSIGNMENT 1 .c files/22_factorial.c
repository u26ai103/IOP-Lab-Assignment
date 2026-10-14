#include <stdio.h>
int main(){
    int number, i=1;
    long int factorial;
    factorial=1;
    printf("Enter a number :");
    scanf("%d", &number);
            //M1//
    //for(i=1; i<=number; i++){
    //    factorial = i*factorial;
    //}
    while(i<=number){   //M2//
        factorial=factorial*i;
        i = i+1;
    }
    printf("%ld", factorial);
    return 0;
}