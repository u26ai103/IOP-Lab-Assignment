#include<stdio.h>
int main(){
    int i, max, s_max, n;
    printf("Enter the no. of elements you want to enter: ");
    scanf("%d", &n);
    int num[n];
    for(i=0;i<n;i++){
        printf("%d = ", i+1);
        scanf("%d", &num[i]);
    }
    max=num[0];
    s_max=num[0];
    for (i = 1; i < n; i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    for(i=1; i<n; i++){
        if(max>num[i] && s_max<num[i]){
            s_max=num[i];
        }
    }
    printf("THE MAX NO. IS : %d\n", max);
    printf("THE SECOND MAX NO. IS : %d", s_max);
    return 0;
}