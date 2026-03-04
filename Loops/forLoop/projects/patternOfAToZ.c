#include <stdio.h>

int main() {
    int n = 6;
    for(int i = 1; i <= n; i++) {
        char k = 'A' + i - 1;

        for(int j = 1; j <= i; j++) {
            printf("%c ", k);
        }
        if(i == 5) {
            printf("\n");
        }
        printf("\n");
    }
}