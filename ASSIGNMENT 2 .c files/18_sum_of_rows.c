#include<stdio.h>
int main(){
    int n=3, a[n][n], i, k, r;
    printf("Enter a 2D array -->\n");
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            printf("%d.\t%d.\t", i+1, k+1);
            scanf("%d", &a[i][k]);
        }
    }
    printf("The sum of rows is -->\n");
    for(i=0;i<n;i++){
        r=0;
        for(k=0;k<n;k++){
            r+=a[i][k];
        }
        printf("Sum of row %d is %d\n", i+1, r);
    }
}