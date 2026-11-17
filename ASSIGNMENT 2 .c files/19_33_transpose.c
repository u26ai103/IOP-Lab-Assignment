#include<stdio.h>
int main(){
    int n=3, a[n][n], i, j, k, temp;
    printf("Enter the elements of Matrix -->\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d.\t%d.\t", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("ORIGINAL\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(i!=j){
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    printf("TRANSPOSE\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}