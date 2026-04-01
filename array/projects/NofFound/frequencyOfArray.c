/*
Frequency Array:
Given 2 numbers N, M and an array A of N numbers. For every number from 1 to M, print how many times this number appears in this array.

Sample Input

10 5
1 2 3 4 5 3 2 1 5 3

Sample output
2
2
3
1
2

Note:
Numbers from 1 to 5 appearance are :
1 appears 2 times in the array .
2 appears 2 times in the array.
3 appears 3 times in the array.
4 appears once in the array.
5 appears 2 times in the array.
*/

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];

    // Accesing value from 1, so index 0 + 1
    int freq[m + 1];

    // putting 0 in to 0 - m in the array
    for(int i = 0; i <= m; i++) {
        freq[i] = 0;
    }

    // Inserting value to arry
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }

    // For increasing freq array numbers for real array(n) numbers
    int x;
    for(int i = 0; i < n; i++) {
        x = arr[i];
        ++freq[x];
    }

    // Priting freq array
    for(int i = 1; i <= m; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}