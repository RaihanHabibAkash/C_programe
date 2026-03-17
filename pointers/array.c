#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;

    // address of location
    printf("%d %d\n", &arr[0], p);

    // Next index location and value
    printf("%d => %d\n", (p + 1), *(p + 1));


    // Char value increment
    char c = 'a';
    char *x = &c;
    printf("%d %d", x, (x + 1));

    return 0;
}