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

int checkVowel(char c) {
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' ||
         c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
        return 1;
    } else return 0;
}

int countVowel(char s[], int i, int j) {
    int count = 0;
    // base case
    if(i == j) {
        return 0;
    }

    char charater = s[i];
    int res = checkVowel(charater);

    if(res == 1) {
        count = 1;
    } else {
        count = 0;
    }

    return count + countVowel(s, i + 1, j);
}

int main() {
    char str[250];
    scanf("%[^\n]s", str);

    int len = strlen(str);


    int result  = countVowel(str, 0, len);

    printf("%d", result);

    return 0;
}