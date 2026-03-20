/*
N. Shift Zeros
time limit per test1 second
memory limit per test256 megabytes
Given an array A
 of size N
. Print the array elements after shifting all zeroes in array A
 to the right.

Note: Solve this problem using function.

Input
First line will contain a number N
 (1≤N≤103)
 number of elements.

Second line will contain N
 numbers (0≤Ai≤103)
.

Output
Print the array after shifting right all its zeros.

Examples
InputCopy
4
2 0 0 5
OutputCopy
2 5 0 0 
InputCopy
5
1 5 0 7 4
OutputCopy
1 5 7 4 0 
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N

#include <stdio.h>

void shiftZeros(int a[], int length) {
    int arrZeors[length];
    int arrNumbers[length];

    int zI = 0;
    int nI = 0;

    // Searching value
    for(int i = 0; i < length; i++) {
        if(a[i] == 0) {
            arrZeors[zI++] = a[i];        
        } else {
            arrNumbers[nI++] = a[i];
        }
    }

    // Inserting in array
    int index = 0;
    for(int i = 0; i < nI; i++) {
        a[index++] = arrNumbers[i];
    }
    for(int i = 0; i < zI; i++) {
        a[index++] = arrZeors[i];
    }

}

int main() {
    // Taking input of lenght
    int len;
    scanf("%d", &len);

    // Inserting value for array
    int arr[len + 1];
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    shiftZeros(arr, len);

    // Printing
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}