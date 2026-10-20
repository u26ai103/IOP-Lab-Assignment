#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) {
        printf("%d. ", i + 1);
        scanf("%d", &a[i]);
    }
    int max = a[0], smax = a[0];
    for(i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    for(i = 0; i < n; i++) {
        if(a[i] < max && a[i] >= smax) {
            smax = a[i];
        }
    }
    printf("MAX = %d\n", max);
    printf("SMAX = %d", smax);
    return 0;
}