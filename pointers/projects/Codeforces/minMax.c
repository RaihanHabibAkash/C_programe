/*
K. Max and Min
time limit per test0.25 seconds
memory limit per test64 megabytes
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
InputCopy
1 2 3
OutputCopy
1 3
InputCopy
-1 -2 -3
OutputCopy
-3 -1
InputCopy
10 20 -5
OutputCopy
-5 20
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <stdio.h>

int main() {
    // Taking inputs
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Pointers
    int *x = &a,
        *y = &b,
        *z = &c;

    // Printing min
    // a < b
    if(*x < *y) {
        // a < c
        if(*x < *z) {
            printf("%d ", *x); // a
        } else {
        // c < a
            printf("%d ", *z);
        }
    // b < a
    } else {
        // b < c
        if(*y < *z) {
            printf("%d ", *y);
        } else {
        // c < b
            printf("%d ", *z);
        }
    }

    // Printing max
    // a > b
    if(*x > *y) {
        // a > c
        if(*x > *z) {
            printf("%d", *x); // a
        } else {
        // c > a
            printf("%d", *z);
        }
    // b > a
    } else {
        // b > c
        if(*y > *z) {
            printf("%d", *y);
        } else {
        // c > b
            printf("%d", *z);
        }
    }

    return 0;
}