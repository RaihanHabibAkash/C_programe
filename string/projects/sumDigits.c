/*
E. Count
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.

Example
InputCopy
351
OutputCopy
9
Note
First Test :

3 + 5 + 1 = 9 .
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E


#include <stdio.h>
#include <string.h>

int main() {
    // Taking input
    char lekha[1000000 + 100];
    scanf("%[^\n]s", lekha);

    // Checking for length
    int len = strlen(lekha);

    int sum = 0;

    // Geting the diging and sum of them
    for(int i = 0; i < len; i++) {
        int digit = lekha[i] - '0';
        sum += digit;
    }

    // Printing the sum
    printf("%d\n", sum);

    return 0;
}