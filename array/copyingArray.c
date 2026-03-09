#include <stdio.h>

int main() {
    int n, c;

    // Array length
    scanf(" %d", &n);
    int arr[n];

    // Inserting in array
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }

    printf("Print Array\n");

    // Copy array length
    c = n;
    int cArr[c];

    // Coping array
    for(int i = 0; i < c; i++) {
        cArr[i] = arr[i];
    }

    // Insering one val in firat arr
    arr[3] = 10;

    // Printing in array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Printing copyArray
    for(int i = 0; i < c; i++) {
        printf("%d ", cArr[i]);
    }

    printf("\n");

    return 0;
}