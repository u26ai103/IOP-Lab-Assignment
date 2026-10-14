#include<stdio.h>
int main(){
    int number, reverse, remainder, original_number;
    printf("Enter a number : ");
    scanf("%d", &number);
    original_number = number;
    reverse=0;
    while(number!= 0){
        remainder = number%10;
        reverse = reverse*10 + remainder;
        number = number/10;
    }
    if(reverse==original_number)
    printf("%d number is a palindrome", original_number);
    else 
    printf("%d number is not a palindrome", original_number);
}