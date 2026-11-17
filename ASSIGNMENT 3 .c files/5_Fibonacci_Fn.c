#include<stdio.h>
void fibonacci(int f);
int main(){
    int n;
    printf("Enter a number n");
    scanf("%d", &n);
    fibonacci(n);

}
void fibonacci(int f){
    int i, fibo, f1=0, f2=1; 
    printf("%d\n", f1);
    printf("%d\n", f2);
    for(i=3;i<=f;i++){
        fibo=f1+f2;
        f1=f2;
        f2=fibo;
        printf("%d\n", fibo);
    }
}