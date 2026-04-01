/*
C. Next Alphabet
time limit per test1 second
memory limit per test256 megabytes
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
InputCopy
a
OutputCopy
b
Note
The next letter to z is a.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);

    if(n == 'z') {
        printf("a");
    } else {
        printf("%c", ++n);
    }

    return 0;
}