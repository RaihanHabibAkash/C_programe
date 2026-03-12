/*
C. Compare
time limit per test1 second
memory limit per test256 megabytes
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
InputCopy
acm
acpc
OutputCopy
acm
Note
For more information visit Lexicographical order: https://en.wikipedia.org/wiki/Lexicographical_order
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <stdio.h>
#include <string.h>

int main() {
    char x[30], y[30];
    fgets(x, sizeof(x), stdin);
    fgets(y, sizeof(y), stdin);

    int compare = strcmp(x, y);

    // x < y
    if(compare < 0) {
        fputs(x, stdout);
    
    // y < x
    } else if(compare > 0) {
        fputs(y, stdout);
    
    // x == y
    } else {
        fputs(x, stdout);
    }

    return 0;
}