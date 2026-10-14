#include <stdio.h>
int main(){
    int N, i, even_sum, odd_sum;
    even_sum = 0;
    odd_sum = 0;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        if(i%2==0){
            even_sum=even_sum+i;
        }
        else{
            odd_sum=odd_sum+i;
        }
    }
    printf("Sum of even numbers from 1 to %d is : %d\n", N, even_sum);
    printf("Sum of odd numbers from 1 to %d is : %d\n", N, odd_sum);
    return 0;
}