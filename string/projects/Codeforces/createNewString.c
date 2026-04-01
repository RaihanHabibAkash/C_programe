/*
A. Create A New String
time limit per test1 second
memory limit per test256 megabytes
Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

Output
Print the answer required above.

Examples
InputCopy
LEVEL
ONE
OutputCopy
5 3
LEVEL ONE
InputCopy
Programming
contest
OutputCopy
11 7
Programming contest
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include <stdio.h>
#include <string.h>

int main() {
    // Taking input
    char lekha1[1010],
         lekha2[1010];
    fgets(lekha1, sizeof(lekha1), stdin);
    scanf("%[^\n]s", lekha2);

    // The length of the string
    int len1 = strlen(lekha1);
    len1--;
    int len2 = strlen(lekha2);

    // New String
    char lekha[len1 + len2 + 10];


    int k = 0;
    // Inserting 2nd string
    for(int i = 0; i < len1; i++) {
        lekha[k++] = lekha1[i];
    }

    // Space after 1st string
    lekha[k++] = ' ';

    // Inserting 2nd string
    for(int i = 0; i < len2; i++) {
        lekha[k++] = lekha2[i];
    }

    // Placing null pointer
    lekha[k++] = '\0';

    // Printing
    printf("%d %d\n", len1, len2);
    printf("%s\n", lekha);

    return 0;
}