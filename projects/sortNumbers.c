/*
T. Sort Numbers
time limit per test0.25 seconds
memory limit per test256 megabytes
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

Examples
InputCopy
3 -2 1
OutputCopy
-2
1
3

3
-2
1
InputCopy
-2 10 0
OutputCopy
-2
0
10

-2
10
0
*/
#include <stdio.h>

int main() {
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);

    // Asending order
    int low, mid, high;
    if(a <= b && a <= c) {
        low = a;
        // a, b, c
        if(b <= c) {
            mid = b;
            high = c;
        // a, c, b
        } else {
            mid = c;
            high = b;
        }
    } else if(b <= a && b <= c) {
        low = b;

        // b, a, c
        if(a <= c) {
            mid = a;
            high = c; 
        // b, c, a
        } else {
            mid = c;
            high = a;
        }
    } else {
        low = c;

        // c, a, b
        if(a <= b) {
            mid = a;
            high = b;
        // c, b, a
        } else {
            mid = b;
            high = a;
        }
    }

    // Asending
    printf("%d\n%d\n%d\n", low, mid, high);
    printf("\n");
    // Normal order
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}