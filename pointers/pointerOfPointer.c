#include <stdio.h>

int main() {
    int a = 5;

    int *x = &a;

    int **n = &x;

    printf("%d %d\n", n, &x);
    printf("%d %d\n",*n, x);
    printf("%d %d %d\n", **n, *x, a);

    return 0;
}