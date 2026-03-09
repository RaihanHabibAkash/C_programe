// #include <stdio.h>

// int arr[100000];

// int main() {
//     // Taking length
//     int length;
//     scanf(" %d", &length);

//     // Inserting value in array
//     for(int i = 0; i < length; i++) {
//         scanf(" %d", &arr[i]);
//     }

//     // Reversing arry
//     int temp;
//     for(int i = 0, j = length - 1; i <= length / 2; i++, j--) {
//         // Swaping
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     // Printing value of array
//     for(int i = 0; i < length; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// 2nd way of solution 
#include <stdio.h>

int arr[100000];

int main() {
    // Taking length
    int length;
    scanf(" %d", &length);

    // Inserting value in array
    for(int i = 0; i < length; i++) {
        scanf(" %d", &arr[i]);
    }

    // Reversing arry
    int temp;
    for(int i = 0, j = length - 1; i <= j; i++, j--) {
        // Swaping
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Printing value of array
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}