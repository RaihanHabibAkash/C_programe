#include <stdio.h>

int main() {
    printf("Outside of loop\n");

    // int n = 10;
    // for(int i = n; i > 0; i--) {
    //     printf("i = %d\n", i);
    // }

    // for (int i = 0; i < 3; i++) {
    //     printf("Inside of loop\n");
    //     printf("i = %d\n", i);
    // }

    for (int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            printf("%d Even\n", i);
        } else {
            printf("%d Odd\n", i);
        }
    }

    // for(char i = 'a'; i <= 'z'; i++) {
    //     printf("%c = %d\n", i, i);
    //     // print asci table numbers of characters.
    // }

    printf("Outside of looop\n");

    return 0;
}