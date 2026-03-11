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
    // Taking 2 string input
    char str1[11],
         str2[11];
    scanf(" %s", str1);
    scanf(" %s", str2);

    // Checking the size of first string
    int index1 = 0;
    while(str1[index1] != '\0') {
        // For while loop
        ++index1;
    }

    // Checking the size of second string
    int index2 = 0;
    while(str2[index2] != '\0') {
        // For while loop
        ++index2;
    }

    // Printing length of the 2 string
    printf("%d %d\n", index1, index2);

    // Concatenating 2 string and printing
    printf("%s%s\n", str1, str2);

    // Swaping the first element
    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;

    // Printing 2 string
    printf("%s %s\n", str1, str2);

    return 0;
}