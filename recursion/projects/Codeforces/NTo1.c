/*
C. Print from N to 1
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
InputCopy
4
OutputCopy
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

void rec(int i, int x) {

    // base case
    if(i == x) {
        printf("%d", i);
        return;
    }

    rec(i + 1, x);

    printf(" %d", i);
}

int main() {
    // Taking input n
    int n;
    scanf("%d", &n);

    rec(1, n);

    return 0;
}