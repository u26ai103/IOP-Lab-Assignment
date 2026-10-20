#include<stdio.h>
int main(){
    int i, j, k, m, n=4;
    for(i=1; i<=4; i++){
        for(j=3; j>=i; j--){
            printf("  ");
        }
        for(k=1;k<=(2*i-1);k++){
            if(k>i){
                printf("%d ", (2*i-k));
            }
            else{
                printf("%d ", k);
            }
        }
        for(m=3; m>=i; m--){
            printf("  ");
        }
    printf("\n");
    }
    return 0;
}