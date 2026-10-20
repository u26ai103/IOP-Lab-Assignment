#include<stdio.h>
int main(){
    int a[10], b[10], temp, i, j, k;
    printf("Enter 10 elements of first array:");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter 10 elements of second array:");
    for(i=0;i<10;i++){
        scanf("%d", &b[i]);
    }
    printf("After swapping\n");
    printf("A\tB\n");
    for(k=0;k<10;k++){
        temp=a[k];
        a[k]=b[k];
        b[k]=temp;
        printf("%d\t%d\n", a[k], b[k]);
    }
}