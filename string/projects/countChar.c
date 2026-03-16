/*
J. Count Letters
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Determine how many times does each letter occurred in S.

Input
Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

Output
For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

Note: you must print letters in ascending order.

Examples
InputCopy
aaabbc
OutputCopy
a : 3
b : 2
c : 1
InputCopy
regff
OutputCopy
e : 1
f : 2
g : 1
r : 1
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J


#include <stdio.h>
#include <string.h>

int main() {
    char string[10000000];
    // Taking input
    scanf("%s", string);

    // Freq array
    int freq[26];
    
    // Inserting string char in the freq array
    for(int i = 0; string[i] != '\0'; i++) {
        // Getting the char
        char ch = string[i];
        // Converting into number 0 - 25
        int index = ch - 'a';
        // increment of the char in freq array
        freq[index]++;
    }

    // Printing the freq array
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            // Converting index into char 0 - 25 
            char ch = i + 'a';
            // Printing the char freq
            printf("%c : %d\n", ch, freq[i]);   
        }
    }

    return 0;
}