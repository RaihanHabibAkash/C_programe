/*
B. Print from 1 to N
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
InputCopy
5
OutputCopy
1
2
3
4
5
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>

void rec(int i, int x) {
    // base case
    if(i > x) return; 

    printf("%d\n", i);

    rec(i + 1, x);
}

int main() {
    // Taking n as input
    int n;
    scanf("%d", &n);

    rec(1, n);

    return 0;
}