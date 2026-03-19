// #include <stdio.h>

// void rec(int a) {
//     // Base case
//     if(a <= 0) {
//         return;
//     }

//     printf("%d\n", a);
//     rec(a - 1);
// }

// int main() {
//     rec(10);

//     return 0;
// }

#include <stdio.h>

void rec(int x, int n) {
    // Base case
    if(x > n) return;

    rec(x + 1, n);

    printf("%d\n", x);
}

int main() {
    rec(1, 10);

    return 0;
}