#include <stdio.h>

int main() {
    printf("Before Loop\n");

    int i = 1;

    // while(i < 10) {
    //     printf("Inside Loop i = %d\n", i);
    //     i++;
    // }

    do {
        printf("Inside loop i = %d\n", i);
        i++;
    } while(i < 10);

    printf("After Loop\n");
}