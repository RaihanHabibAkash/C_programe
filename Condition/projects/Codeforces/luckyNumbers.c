/*
I. Lucky Numbers
time limit per test1 second
memory limit per test256 megabytes
A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99)
.

Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
InputCopy
39
OutputCopy
YES
InputCopy
64
OutputCopy
NO
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // First Number
    int x = n % 10;
    n /= 10;
    
    // Last Number
    int y = n % 10;
    n /= 10;

    if(x % y == 0) {
        printf("YES");
    } else if(y % x == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}