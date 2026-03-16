/*
Problem Statement: Given a string of length N. Print the unique characters in the string in increasing alphabetical order.



Sample Input
3
abc

5
apple

7
abbgaab


Sample Output

abc

aelp

abg

*/

// https://docs.google.com/document/d/1OJyO7DmkSyRSqT97pwkpMeIYdHAgUsZWOdUdZVUqa0w/edit?tab=t.0

#include <stdio.h>
#include <string.h>

int main() {
    // Takinginput
    char str[100000];
    scanf("%s", str);

    // Length of string
    int len = strlen(str);

    // Freq array
    int freq[26];

    // Checking for unique char
    for(int i = 0; i < len; i++) {
        // Taking char
        char ch = str[i];
        // Convering into number
        int index = ch - 'a';
        // Placing value 1 for each number
        freq[index] = 1;
    }

    // printing char with 1
    for(int i = 0; i < 26; i++) {
        if(freq[i] == 1) {
            // Converting index into number
            char ch = i + 'a';
            // Priting 
            printf("%c", ch);
        }
    }


    return 0;
}