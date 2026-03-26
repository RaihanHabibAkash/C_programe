#include <stdio.h>

int isPalin(int *a, int i, int j) {
    if(i > j) return 0;
    
    return a[i] != a[j] || isPalin(a, i + 1, j - 1);
}

int main() {
    int len;
    scanf("%d", &len);
    int arr[len];
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    int res = isPalin(arr, 0, len - 1);
    printf("%d", res);
    return 0;
}