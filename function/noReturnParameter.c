#include <stdio.h>

void add(int a, int b) {
    printf("Fucntion called\n");
    int sum = a + b;
    printf("%d\n", sum);
    return;
}

void alphaCheck(char c) {
    if('a' <= c && c <= 'z') printf("Lower\n");
    else printf("Upper\n");
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    add(x, y);

    alphaCheck('d');
    alphaCheck('Z');


    return 0;
}