#include <stdio.h>
// If we dont use pointer and given just value at the main function it was called call by value


void swap(int *x, int *y) {     // refrence of a, b
    printf("Swap function: %p %p\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
}


int main() {
    int a = 10, b = 20;

    swap(&a, &b);

    printf("Address in main: %p %p\n", &a, &b);

    printf("%d %d\n", a, b);

    return 0;
}