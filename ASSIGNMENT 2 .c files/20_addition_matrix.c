#include<stdio.h>
int main(){
    int a[3][3], i, j, k, b[3][3], sum, result[3][3];
    printf("A\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("B\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            result[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf(" \n+\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf(" \n=\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d", result[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}