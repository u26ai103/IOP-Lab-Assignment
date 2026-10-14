#include <stdio.h>
int main(){
    int number, original_number, sum, remainder;
    printf("Enter a number : ");
    scanf("%d", &number);
    sum=0;
    while(number!=0){
        remainder=number%10;
        sum=sum+remainder;
        number=number/10;
    }
    printf("THE SUM OF INDIVIDUAL DIGITS OF %d IS : %d", number, sum);
    return 0;
}