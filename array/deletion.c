#include <stdio.h>

int arr[100000];
int main() {
    // Taking input of length
    int length;
    scanf(" %d", &length);

    // Inserting in empty arr
    for(int i = 0; i < length; i++) {
        scanf(" %d", &arr[i]);
    }

    // taking index for deletion
    int index;
    scanf(" %d", &index);

    // deletion
    for(int i = index; i < length; i++) {
        arr[i] = arr[i + 1];
    }

    // Lenght is - 1
    --length;

    // Printing array
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}