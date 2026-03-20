// #include <stdio.h>

// int func(int a[], int len) {
//     int sum = 0;
//     for(int i = 0; i < len; i++) {
//         sum += a[i];
//     }

//     return sum;
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     int res = func(arr, 5);

//     printf("%d", res);

//     return 0;
// }

#include <stdio.h>

// Reciving refrence of the array
int func(int *a, int len) {
    for(int i = 0; i < len; i++) {
        *(a + i) += 2;
    }

    
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    func(arr, 5);

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}