/*
Given a number N
. Print "I love Recursion" N
 times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤100)
 .

Output
Print "I love Recursion" N
 times.

Example
InputCopy
3
OutputCopy
I love Recursion
I love Recursion
I love Recursion
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <stdio.h>

void rec(int i) {

    // Base case
    if(i == 0) return;

    printf("I love Recursion\n");

    rec(i - 1);
}

int main() {
    // Taking input n times
    int n;
    scanf("%d", &n);

    rec(n);

    return 0;
}