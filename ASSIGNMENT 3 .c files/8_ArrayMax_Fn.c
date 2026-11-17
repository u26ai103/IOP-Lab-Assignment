#include<stdio.h>
int array_max(int n, int a[n]);
int main(){
    int n, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        printf("%d.", i+1);
        scanf("%d", &a[i]);
    }

    printf("MAX NUMBER IS --> %d", array_max(n, a));

}
int array_max(int n, int a[n]){
    int i, max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}