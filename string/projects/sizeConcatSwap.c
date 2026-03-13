/*
D. Strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
InputCopy
abcd
ef
OutputCopy
4 2
abcdef
ebcd af
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <stdio.h>

int main() {
    char a[15], b[15], c[30];
    scanf("%s %[^\n]s", a, b);

    // lenth1
    int len1 = 0;
    while(a[len1] != '\0') {
        len1++;
    }

    // lenth1
    int len2 = 0;
    while(b[len2] != '\0') {
        len2++;
    }

    // printing length
    printf("%d %d\n", len1, len2);

    // First lenth
    int k = 0; 
    for(int i = 0; i < len1; i++, k++) {
        c[k] = a[i];
    }

    // Second length
    for(int i = 0; i < len2; i++, k++) {
        c[k] = b[i];
    }

    // Setting null at the end
    c[k] = '\0';

    // Printing concat string c
    printf("%s\n", c);

    // Swaping first char of the two string
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    // Printing both string
    printf("%s %s", a, b);
    
    return 0;
}