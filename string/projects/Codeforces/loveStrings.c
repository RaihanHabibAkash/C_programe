/*
K. I Love strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.

Example
InputCopy
2
ipAsu ccsit
ey gpt
OutputCopy
icpcAssiut
egypt
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <stdio.h>
#include <string.h>

int main() {
    int cs;
    scanf("%d", &cs);

    char str[1000000];

    // Taking cs time Inputs
    while(cs--) {
        char str1[55],
             str2[55];
        
        // Taking inputs
        scanf("%s", str1);
        scanf("%s", str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);

        // Var for strings
        int i = 0, // str1
            j = 0, //str2
            k = 0; //str

        if(len1 < len2) {
            // str1 + str2, until str1 length
            for( ; str1[i] != '\0'; ) {
                str[k++] = str1[i++];                
                str[k++] = str2[j++];
            }
            
            // Str2 remaing
            for( ; str2[j] != '\0'; ) {
                str[k++] = str2[j++];
            }

            // Placing null pointer
            str[k] = '\0';

        } else if(len1 > len2) {
            // str1 + str2, until str2 length
            for( ; str2[j] != '\0'; ) {
                str[k++] = str1[i++];
                str[k++] = str2[j++];
            }

            // str1 remain
            for( ; str1[i] != '\0'; ) {
                str[k++] = str1[i++];
            }

            // Placing null pointer
            str[k] = '\0';

        } else {
            // str1 + str2
            for( ; str1[i] != '\0'; ) {
                str[k++] = str1[i++];
                str[k++] = str2[j++];
            }

            // Placing null pointer
            str[k] = '\0';
        }

        printf("%s\n", str);
    }

    
    return 0;
}