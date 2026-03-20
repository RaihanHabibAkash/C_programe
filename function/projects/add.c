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

int add(int x, int y) {
    long long sum = x + y;
    return sum;
}

int main() {
    // Taking input
    int a, b;
    scanf("%d %d", &a, &b);

    // Printing the sum
    long long result = add(a, b);
    printf("%lld", result);
}