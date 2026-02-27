#include <stdio.h>

#include <stdio.h>

int main() {
    printf("Outside of loop\n");
    for (int i = 0; i < 3; i++) {
        printf("Inside of loop\n");
        printf("i = %d\n", i);
    }
    printf("Outside of looop\n");
    return 0;
}