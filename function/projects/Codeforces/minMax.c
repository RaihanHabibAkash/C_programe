/*
Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input
First line will contain a number N (1 ≤ N ≤ 103) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 105).

Output
Print the minimum and the maximum number separated by a space.

Example
InputCopy
5
10 13 95 1 3
OutputCopy
1 95
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int max(int a, int b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

void func(int a[], int length) {
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    // comaring every value
    for(int i = 0; i < length; i++) {
        minimum = min(minimum, *(a + i));
        maximum = max(maximum, *(a + i));
    }

    // Printing
    printf("%d %d\n", minimum, maximum);
}

int main() {
    // input
    int len;
    scanf("%d", &len);

    // Inserting values
    int arr[len];
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    func(arr, len);

    return 0;
}