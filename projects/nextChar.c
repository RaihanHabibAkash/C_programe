#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);

    for(int i = 'a'; i <= 'z'; i++) {
        if(n < i) {
            printf("%c", i);
            break;
        }
    }

    return 0;
}