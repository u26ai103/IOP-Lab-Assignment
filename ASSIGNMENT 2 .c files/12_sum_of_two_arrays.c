#include<stdio.h>
int main(){
    int a[10], b[10], r[10], i, j, k;
    printf("Enter 10 elements of first array:");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter 10 elements of second array:");
    for(i=0;i<10;i++){
        scanf("%d", &b[i]);
    }
    printf("Sum of two arrays is :");
    for(k=0;k<10;k++){
        r[k]=a[k]+b[k];
        printf("%d\n", r[k]);
    }
}