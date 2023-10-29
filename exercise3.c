#include <stdio.h>
#include <stdlib.h>

//c program for comparing two strings without using string function.
int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }


    if (*str1 == '\0' && *str2 == '\0') {
        return 1;
    }


}
int main()
{
    char str1[222], str2[222];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}

