/*
E. Lowest Number
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

Examples
InputCopy
3
1 2 3
OutputCopy
1 1
InputCopy
5
5 6 2 3 2
OutputCopy
2 3
*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf(" %d", &n);

    // Inserting
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }

    // Finding lowest
    int low = INT_MAX;
    int lowIndex = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < low) {
            low = arr[i];
            lowIndex = i + 1;
        }
    }

    printf("%d %d\n", low, lowIndex);

    return 0;
}