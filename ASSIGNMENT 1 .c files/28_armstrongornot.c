#include <stdio.h>
#include <math.h>
int main(){
    int num, originalNum, remainder, n=0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    int temp=num;
    while (temp != 0){
        temp /= 10;
        ++n;
    }
    temp = num;

    while (temp != 0){
        remainder = temp%10;
        result += round(pow(remainder, n));
        temp /= 10;
    }
    if ((int)result == originalNum)
        printf("%d is an armstrong number\n", originalNum);
    else{
        printf("%d is not a armstrong number\n", originalNum);

    }
    return 0;
}