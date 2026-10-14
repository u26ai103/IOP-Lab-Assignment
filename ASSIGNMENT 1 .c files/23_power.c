#include<stdio.h>
int main(){
    int power, number, i;
    long int result;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("Enter power : ");
    scanf("%d", &power);
    result = 1;
    /*for(i=1; i<=power; i++){
        result = result * number;
    }*/
   i=1;
while(i<=power){
    result = result * number;
    i=i+1;
}
    printf("The result is : %.2ld", result);
}