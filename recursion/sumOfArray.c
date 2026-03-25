// #include <stdio.h>

// int arr[1000000] = {0},
//     sum = 0;

// void goToIndex(int i, int n) {
//     // base case
//     if(i == n) {
//         return;
//     }

//     // Summation of array
//     sum += arr[i];

//     goToIndex(i + 1, n);
// }

// int main() {
//     // Taking lenght of inputs
//     int length;
//     printf("Give me length of the array\n");
//     scanf("%d", &length);

//     // Taking inputs for array
//     printf("Give me %d numbers\n", length);
//     for(int i = 0; i < length; i++) {
//         scanf("%d", &arr[i]);
//     }

//     sum = 0;
//     goToIndex(0, length);

//     printf("The sum of the array is %d\n", sum);

//     return 0;
// }


/*
last index will return 0, return arr[i] + (return (arr[i] + 0))
*/
#include <stdio.h>

int arr[1000000] = {0};

int sumOfArray(int i, int n) {
    // base case
    if(i == n) {
        return 0;
    }

    printf("index(%d, %d) => %d + %d = %d\n", i, i + 1, arr[i], arr[i + 1], arr[i] + arr[i + 1]);
    
    return arr[i] + sumOfArray(i + 1, n);
}

int main() {
    // Taking lenght of inputs
    int length;
    printf("Give me length of the array\n");
    scanf("%d", &length);

    // Taking inputs for array
    printf("Give me %d numbers\n", length);
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumOfArray(0, length);

    printf("The sum of the array is %d\n", result);

    return 0;
}