#include <stdio.h>

int main() {
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);

    // Min
    if(a <= b) {
        if(a <= c) {
            printf("%d ", a);
        } else {
            printf("%d ", c);
        }
    } else {
        if(b <= c) {
            printf("%d ", b);
        } else {
            printf("%d ", c);
        }
    }

    // Max
    if(a >= b) {
        if(a >= c) {
            printf("%d ", a);
        } else {
            printf("%d ", c);
        }
    } else {
        if(b >= c) {
            printf("%d ", b);
        } else {
            printf("%d ", c);
        }
    }

    printf("\n");

    return 0;
}