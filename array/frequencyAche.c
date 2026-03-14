#include <stdio.h>

int main() {
    printf("Size of array\n");
    int n;
    scanf("%d", &n);

    // Taking array
    int arr[n + 5];
    printf("Give me %d numbers\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[100000] = {0};

    // Placing value for freq
    for(int i = 0; i < n; i++) {
        freq[arr[i]] = 1;
    }

    // taking m times inputs
    int m;
    printf("How many times you want check\n");
    scanf(" %d", &m);

    // Taking inputs for the array
    printf("Give me %d numbers\n", m);
    for(int i = 0; i < m; i++) {
        int t;
        scanf(" %d", &t);
        if(freq[t] == 1) {
            printf("%d is %d\n", t, freq[t]);
        } else {
            printf("Nai\n");
        }
    }

    return 0;
}