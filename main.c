#include <stdio.h>
#include <stdlib.h>
// c program to make pyramid with asterisk.
int main()
{
    int n, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j % 2 == 0) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
