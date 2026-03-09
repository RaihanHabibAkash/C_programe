#include <stdio.h>

int arr[100000];

int main() {
    int length;
    scanf(" %d", &length);

    // value placing in array
    for(int i = 0; i < length; i++) {
        scanf(" %d", &arr[i]);
    }

    // Scan val and index for insertion
    int val, index;
    scanf(" %d %d", &val, &index);

    // Insertion
    for(int i = length - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    } 

    // arr lenght + 1
    ++length;
    
    // Inserting one value
    arr[index] = val;

    // Printing val
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}