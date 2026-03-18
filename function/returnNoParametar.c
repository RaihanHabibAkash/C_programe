// #include <stdio.h>
// int a, b; // global variable

// int add() {
//     int sum = a + b;
//     printf("Function Called\n");
//     return sum;
// }

// int main() {
//     a = 200, b = 300;
//     printf("%d\n", add());
//     a = 1, b = 2;
//     printf("%d\n", add());
//     a = 100, b = 100;
//     printf("%d\n", add());
//     return 0;
// }

#include <stdio.h>

int add() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("Function Called\n");
    return sum;
}

double getPI() {
    return 3.1459;
}

int main() {
    printf("Before\n");
    // printf("%d\n", add());
    // printf("%d\n", add());
    printf("%0.4f\n", getPI());
    printf("After\n");
    return 0;
}