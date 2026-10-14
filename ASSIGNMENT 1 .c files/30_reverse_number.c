#include <stdio.h>
int main(){
    int number, original_number, reverse, remainder;
    printf("Enter a number : ");
    scanf("%d", &number);
    original_number=number;
    reverse=0;
    while(number!=0){
        remainder=number%10;
        reverse = reverse*10 + remainder;
        number = number/10;
    }
    printf("THE REVERSE OF %d IS : %d", original_number, reverse);
    return 0;
}