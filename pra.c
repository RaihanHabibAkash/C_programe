#include <stdio.h>

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);

    int freq[100005];

    int arr[n + 5];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for(int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}