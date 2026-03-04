#include <stdio.h>

int main() {
    int arr[6];

    for(int i = 0; i < 6; i++) {
        scanf(" %d", &arr[i]);
    }

    arr[1] += 20;

    // Characters take space as char as well

    for(int j = 0; j < 6; j++) {
        // Memory location
        printf("%d => %d\n", &arr[j], arr[j]);
    }
}