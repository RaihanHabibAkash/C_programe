/*
F. Reversing
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
InputCopy
4
5 1 3 2
OutputCopy
2 3 1 5 
InputCopy
5
1 2 3 4 5
OutputCopy
5 4 3 2 1 
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);

    int arr[n];

    // Inserting
    for(int i = n - 1; i >= 0; i--) {
        scanf(" %d", &arr[i]);
    }

    // Printing
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}