/*
J. Factorial
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
InputCopy
5
OutputCopy
120
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J


#include <stdio.h>

long long factorial(int i) {
    // base case
    if(i == 0) return 1;

    return i * factorial(i - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    long long result = factorial(n);
    printf("%lld", result);

    return 0;
}