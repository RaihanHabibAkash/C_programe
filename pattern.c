// #include <stdio.h>

// int main() {

//     for(int i = 1; i <= 5; i++){
//         for(int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
// Reverse Oder
#include <stdio.h>
int main() {

    for(int i = 1; i <= 5; i++){
        for(int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
// printing in last using space
#include <stdio.h>
int main() {
    int n = 7;

    for(int i = 1; i <= n; i++){
        for(int x = 1; x <= n - i; x++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
*/

// printing in last using space reverse
#include <stdio.h>
int main() {
    int n = 7;

    for(int i = n; i >= 1; i--){
        for(int x = n - i; x >= 1; x--){
            printf(" ");
        }

        for(int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
