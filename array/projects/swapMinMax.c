/*
M. Replace MinMax
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
InputCopy
5
4 1 3 10 8
OutputCopy
4 10 3 1 8 
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);
    int arr[n];

    int minIndex = 0,
        maxIndex = 0;

    // Inserting and checking for min and max
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);

        // for min
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        // for max
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swaping
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Printing loop
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}