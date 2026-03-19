#include <stdio.h>

void add() {
    printf("Function Called\n");

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("%d\n", sum);
}

void greetings() {
    printf("Good morning\n");
}

int main() {
    greetings();
    add();
    return 0;
}