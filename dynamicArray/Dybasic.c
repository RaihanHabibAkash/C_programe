#include <stdio.h>
#include <stdlib.h>

int main() {
    // Memory alocation for array
    // int *arr = (int *)malloc(5 * sizeof(int)); // stores garbage values at begin
    int *arr = (int *)calloc(5, sizeof(int)); // stores 0 values at begin

    // Inserting value in the array
    for(int i = 0; i < 5; i++) {
        arr[i] = 100 + i + 1;
    }

    // Recizing into temp pointer
    int *temp = (int *)realloc(arr, 10 * sizeof(int));

    // If temp return null, chance of memory leakege. so free(arr)
    // and return out of the function
    if(temp == NULL) {
        printf("realloc Failed\n");
        free(arr);
        return 1;
    } 

    // If success temp pointer == arr pointer
    arr = temp;

    // Inserting value
    for(int i = 5; i < 10; i++) {
        arr[i] = 100 + i + 1;
    }

    // Printting 
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Memory dealocation for array
    free(arr);


    return 0;
}