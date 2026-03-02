// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for(int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 10; j++) {
            printf("%d x %2d = %2d\n", i, j, i * j);
        }
        printf("\n\n");
    }
    
    return 0;
}