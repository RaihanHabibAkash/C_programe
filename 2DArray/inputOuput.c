#include <stdio.h>

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);

    // Declearing 2d array
    int arr[n + 5][m + 5];

    // Taking inputs
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }

    // Updating some value
    arr[2][4] = 100;
    arr[0][1] = 200;

    // Printing output
    printf("Printing part\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}