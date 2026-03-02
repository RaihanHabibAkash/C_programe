#include <stdio.h>

int main() {
    char X;
    scanf(" %c", &X);
    if('0' <= X && X <= '9') {
        printf("IS DIGIT\n");
    } else {
        printf("ALPHA\n");

        if('a' <= X && X <= 'z') {
            printf("IS SMALL\n");
        } else {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}