#include<stdio.h>
int main(){
    int a[3][3], i, j, k, n, p, f, u, b;
    printf("Enter array -->\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d.\t%d.\t", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    int max=a[0][0];
    for(k=0;k<3;k++){
        for(b=0;b<3;b++){
           if(a[k][b]>max){
                max=a[k][b];
                n=k;
                p=b;
            }
        }
        printf("\n");
    }
    int min=a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           if(a[i][j]<min){
                min=a[i][j];
                f=i;
                u=j;
            }
        }
    }
    printf("The maximum element is %d at position %d.%d\n", max, n+1, p+1);
    printf("The minimum element is %d at position %d.%d\n", min, f+1, u+1);
}