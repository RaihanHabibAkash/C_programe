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
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);
    int min, max;

    // Min
    if(a <= b) {
        if(a <= c) {
            min = a;
        } else {
            min = c;
        }
    } else {
        if(b <= c) {
            min = b;
        } else {
            min = c;
        }
    }

    // Max
    if(a >= b) {
        if(a >= c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if(b >= c) {
            max = b;
        } else {
            max = c;
        }
    }
    printf("%d %d", min, max);

    return 0;
}