#include <stdio.h>

int arr[1000000];

int main() {
    int length;
    printf("Set lenght of the array\n");
    scanf(" %d", &length);

    // Inserting array
    printf("Insert %d numbers\n", length);
    for(int i = 0; i < length; i++) {
        scanf(" %d", &arr[i]);
    }

    // Index of deletation
    int numberOfDel;
    printf("How many numbers you want to delete\n");
    scanf(" %d", &numberOfDel);

    if(numberOfDel > length) {
        printf("Your %d index is gather than array\n", length);
    } else {
        // Indexes of deltation
        int index;
        printf("Give the index between 0-%d, you want to delete\n", length - 1);
        while(numberOfDel > 0) {
            scanf(" %d", &index);

            // Deleting
            for(int i = index; i < length; i++) {
                arr[i] = arr[i + 1];
            }

            // Decreasing length
            --length;

            // For while loop
            --numberOfDel;
        }
    }

    // Printing the array
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    // Index of deletation
    return 0;
}