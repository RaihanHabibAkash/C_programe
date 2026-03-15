// Diagonal
// #include <stdio.h>
// int main() {
//     int n = 4;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(i == j) {
//                 printf("%d| ", j);
//             } else {
//                 printf("%d ", j)
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Secendery diagonal
#include <stdio.h>
int main() {
    int n = 4;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i + j == n - 1) {
                printf("%d| ", j);
            } else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}