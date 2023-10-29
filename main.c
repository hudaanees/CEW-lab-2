#include <stdio.h>
#include <stdlib.h>
//C program to print all unique elements in an array.
int main()
{
int arr[100], unique[100];
    int n, uniqueCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("Unique elements in the array: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}
