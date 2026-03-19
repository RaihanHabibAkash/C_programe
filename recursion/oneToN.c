#include <stdio.h>

void rec(int x, int n) {
    if(x > n) {
        return;
    }

    printf("%d\n", x);

    printf("Before function call, Current X = %d, %p\n", x, &x);
    rec(x + 1, n);
    printf("After function call, current X = %d, %p\n", x, &x);
}

int main() {
    printf("Before function call in main\n");
    rec(1, 5);
    printf("After function call in main\n");

    return 0;
}