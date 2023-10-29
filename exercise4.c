#include <stdio.h>
#include <stdlib.h>

//c program to convert upper cases into lower and vice versa.
int main() {
    char sentence[1000];
    int i;

    printf("Enter a sentence: ");
    gets(sentence);

for (i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("change sentence: %s\n", sentence);

    return 0;
}
