#include <stdio.h>
int main(){
    int n, i;
    printf("Enter the value of n :");
    scanf("%d", &n);
    for(i=1; i<=20; i++){
        printf("%d*%d = %d\n", n, i, n*i);
    }
    return 0;
}