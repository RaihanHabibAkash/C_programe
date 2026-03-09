#include <stdio.h>

int arr[1000000];

int main() {
    // Taking length of array
    int length;
    printf("Give the length of array\n");
    scanf(" %d", &length);

    // Insertion val in array
    printf("Give %d numbers for array\n", length);
    for(int i = 0; i < length; i++) {
        scanf(" %d", &arr[i]);
    }

    // Give index of insertion
    int insertionTime;
    printf("Give how many insertion you want to do\n");
    scanf(" %d", &insertionTime);

    // Var of val and index
    int val, index;

    printf("Give me the Value and index for insetion\n");

    // val and index will be stored
    while(insertionTime > 0) {
        scanf("%d %d", &val, &index);

        for(int i = length - 1; i >= index; i--) {
            // Swaping to the right
            arr[i + 1] = arr[i];
        }

        // Insetion
        printf("%d is set in %d\n", val, index);
        arr[index] = val;
        
        // Length whill grow +1
        ++length;

        // For while loop
        --insertionTime;
    }

    // Printing value
    printf("Printing %d vales\n", length);
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }



    return 0;
}