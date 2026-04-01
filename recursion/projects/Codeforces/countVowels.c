/*
I. Count Vowels
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
InputCopy
Data Structure Lab
OutputCopy
6
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

#include <stdio.h>
#include <string.h>

int checkVowels(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int countVowels(char l[], int i, int j) {
    if(i == j) return 0;
    
    if(checkVowels(l[i])) return 1 + countVowels(l, i + 1, j);
    else return 0 + countVowels(l, i + 1, j);
}

int main() {
    // Taking input of strintg
    char lekha[220];
    scanf("%[^\n]s", lekha);

    // length of the string
    int len = strlen(lekha);

    // Sending in recurtion
    int count = countVowels(lekha, 0, len);

    // Printing
    printf("%d\n", count);

    return 0;
}