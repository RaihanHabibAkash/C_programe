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
    // Taking length
    int length;
    scanf(" %d", &length);

    // Inserting value in array
    int arr[length];
    for(int i = 0; i < length; i++) {
        scanf(" %d", &arr[i]);
    }

    // Reversing array
    for(int i = 0, j = length - 1; i <= j; i++, j--) {
        // Swaping
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Printing the revese array
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}