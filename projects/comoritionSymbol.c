/*
V. Comparison
time limit per test1 second
memory limit per test256 megabytes
Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.

Input
Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

Output
Print "Right" if the comparison is true, "Wrong" otherwise.

Examples
InputCopy
5 > 4
OutputCopy
Right
InputCopy
9 < 1
OutputCopy
Wrong
InputCopy
4 = 4
OutputCopy
Right
*/
#include <stdio.h>

int main() {
    int a, b;
    char s;

    scanf("%d %c %d", &a, &s, &b);

    if(s == '<') {
        if(a < b) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }

    } else if(s == '>') {
        if(a > b) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }

    } else {
        if(a == b) {
            printf("Right\n");
        } else {
            printf("Wrong\n");
        }
    }
    return 0;
}