#include <stdio.h>

int main() {

    for(int i = 100; i <= 300; i++) {
        if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
            printf("%d is the number\n", i);
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}