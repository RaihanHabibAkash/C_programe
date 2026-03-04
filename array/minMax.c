#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf(" %d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX,
        max = INT_MIN;
    
    for(int j = 0; j < n; j++) {
        if(arr[j] < min) {
            min = arr[j];
        }
        if(arr[j] > max) {
            max = arr[j];
        }
    }

    printf("min = %d\nmax = %d\n", min, max);

    
    return 0;
}