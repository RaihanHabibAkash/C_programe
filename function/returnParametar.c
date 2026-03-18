#include <stdio.h>

int add(int a, int b) {
    printf("Function called\n");

    int sum = a + b;
    return sum;
}

int main() {
    printf("%d\n", add(40, 50));


    int result = add(20, 30);
    printf("Value is => %d\n", result);

    return 0;
}