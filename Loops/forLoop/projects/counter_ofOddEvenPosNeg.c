#include <stdio.h>

int main() {
    int oddCounter = 0,
        evenCounter = 0,
        posCounter = 0,
        negCounter = 0;

    int n, x;
    scanf(" %d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %d", &x);

        if(x % 2 == 0) {
            // Even
            evenCounter++;
        } else {
            // Odd
            oddCounter++;
        }

        if(x > 0) {
            // Pos
            posCounter++;
        } else if(x < 0) {
            negCounter++;
        }
    }

    printf("Even: %d\n", evenCounter);
    printf("Odd: %d\n", oddCounter);    
    printf("Positive: %d\n", posCounter);
    printf("Negative: %d\n", negCounter);
    
    return 0;
}