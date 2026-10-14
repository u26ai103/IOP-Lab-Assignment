#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter values of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    a>b ? (a>c ? printf("%d is MAX no. ", a) : printf("%d is MAX no.", c)) : (b>c ? printf("%d is the Max no. ", b) : printf("%d is the MAX no.", c));
    return 0;
}