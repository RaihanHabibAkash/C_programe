/*
Problem Statement: Given an integer N (1 <= N <= 10^5) and an array of N numbers (1 <= A[i] <= 10^5). Print how many unique numbers are in the array.


Sample Input
5
1 2 1 4 2

7
1 1 2 3 2 3 7

5
1 2 3 4 5


Sample Output
3
4
5
*/

// https://docs.google.com/document/d/1OJyO7DmkSyRSqT97pwkpMeIYdHAgUsZWOdUdZVUqa0w/edit?tab=t.0


#include <stdio.h>

int main() {
    // Taking length of the array
    int len;
    scanf("%d", &len);

    // Main array
    int arr[len + 5];

    // Taking value for array
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    // Freq array
    int freq[100000 + 100] = {0};

    // Checking the value and placing 1, and counting
    int count = 0;
    for(int i = 0; i < len; i++) {
        if(freq[arr[i]] == 0) {
            freq[arr[i]] = 1;
            count++;
        }
    }

    // Printing the count
    printf("%d\n", count);

    return 0;
}