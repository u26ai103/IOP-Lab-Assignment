#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d", ch, ch);
    return 0;
}