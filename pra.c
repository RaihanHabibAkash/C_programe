#include <stdio.h>

int func(int a[], int i, int n) {
    if(i == n) {
        return 0;
    }

    printf("%d\n", *(a + i));
    return *(a + i) + func(a, i + 1, n);
}

int main() {
    int length;
    scanf("%d", &length);

    int arr[length];

    for(int i = 0; i < length; i++) {
        scanf("%d", (arr + i));
    }

    int res = func(arr, 0 ,length);
    printf("%d", res);

    return 0;
}