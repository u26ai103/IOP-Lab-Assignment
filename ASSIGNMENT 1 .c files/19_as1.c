#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);
    (ch >= 'a' && ch <= 'z') ? printf("'%c' is a lowercase letter.\n", ch) : printf("'%c' is not a lowercase letter.\n", ch);

    return 0;
}
