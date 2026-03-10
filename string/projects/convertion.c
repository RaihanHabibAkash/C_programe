/*
G. Conversion
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.

Example
InputCopy
happy,NewYear,enjoy
OutputCopy
HAPPY nEWyEAR ENJOY
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <stdio.h>

int main() {
    // Taking input
    char str[1000000];
    scanf("%s", str);

    // Traversing till last
    int index = 0;
    while(str[index] != '\0') {

        if(str[index] == ',') {
            str[index] = ' ';
        // A - Z aski
        } else if(str[index] >= 'A' && str[index] <= 'Z') {
            str[index] = str[index] + 32;
        // a - z aski
        } else if(str[index] >= 'a' && str[index] <= 'z') {
            str[index] = str[index] - 32;
        }

        // For while loop
        ++index;
    }

    // Printing 
    printf("%s", str);
    return 0;
}