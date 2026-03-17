/*
A. Add
time limit per test1 second
memory limit per test64 megabytes
Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value.

Example
InputCopy
5 2
OutputCopy
7
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include <stdio.h>

int main() {
    // Taking inputs
    int a, b;
    scanf("%d %d", &a, &b);

    // Using pointers
    int *x = &a,
        *y = &b;

    // Derefernce
    long long sum = *x + *y;

    printf("%lld\n", sum);

    return 0;
}