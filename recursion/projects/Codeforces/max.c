/*
K. Max Number
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

Example
InputCopy
5
1 -3 5 4 -6
OutputCopy
5
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

#include <stdio.h>
#include <limits.h>

int findMax(int *a, int i, int j) {
    if(i == j) {
        return INT_MIN;
    }

    int result = findMax(a, i + 1, j);

    if(a[i] > result) return a[i];
    else return result;
} 

int main() {
    // Taking input for lenth of array
    int len;
    scanf(" %d", &len);

    // Taking input of array
    int arr[len];
    for(int i = 0; i < len; i++) {
        scanf(" %d", (arr + i));
    }

    int res = findMax(arr, 0, len);

    printf("%d\n", res);

    return 0;
}