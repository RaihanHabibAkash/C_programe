#include <stdio.h>

int a[100000],
    b[100000];

int main() {
    // Taking length of array
    int length;
    scanf(" %d", &length);

    // Inserting in array
    for(int i = 0; i < length; i++) {
        scanf(" %d", &a[i]);
    }

    // Reversing in copy array b
    for(int i = 0, c = length - 1; i < length; i++, c--) {
        b[i] = a[c];
    }

    // Coping from b array to a array => a == b
    for(int i = 0; i < length; i++) {
        a[i] = b[i];
    }

    // priting a array
    for(int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}