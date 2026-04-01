/*
M. Subsequence String
time limit per test1 second
memory limit per test256 megabytes
Given String S
. Determine if there is a Subsequence in S
 that is equal to "hello" or not.

Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".

Input
Only one line contains a string S
 (5≤|S|≤104)
 where |S| is the length of the string and it consists of lowercase English letters.

Output
Print "YES" if there exists an Subsequence equal to "hello" otherwise, print "NO".

Examples
InputCopy
ahhellllloou
OutputCopy
YES
InputCopy
hlelo
OutputCopy
NO
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M

#include <stdio.h>

int main() {
    char hlw[] = "hello";

    // Taking input
    char string[10005];
    scanf("%[^\n]s", string);

    // Var for checking
    int sub = 1;

    int k = 0;
    for(int i = 0; hlw[i] != '\0'; i++) {
        for(int j = k; string[j] != '\0'; j++) {
            if(hlw[i] == string[j]) {
                k = j + 1;
                sub = 1;
                break;
            }
            sub = 0;
        }

        // After loop is sub == 0 mean not found so break out of first loop
        if(sub == 0) {
            break;
        // String value is't complete yet
        } else if(i < 4) {
            sub = 0;
        }
    }

    if(sub == 0) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0; 
}
