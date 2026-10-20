#include<stdio.h>
int main(){
    int a[10], i, j, num, odd, even, e_count=0, o_count=0;
    printf("Enter 10 numbers\n");
    for(i=0; i<10; i++){
        printf("%d.", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            printf("Number %d is EVEN\n", a[i]);
            e_count+=1;
        }
        else{
            printf("Number %d is ODD\n", a[i]);
            o_count+=1;
        }
    }
    printf("Total number of EVEN no. is %d\n", e_count);
    printf("Total number of EVEN no. is %d", o_count);
}