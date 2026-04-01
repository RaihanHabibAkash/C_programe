/*
C. Compare
time limit per test1 second
memory limit per test256 megabytes
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
InputCopy
acm
acpc
OutputCopy
acm
Note
For more information visit Lexicographical order: https://en.wikipedia.org/wiki/Lexicographical_order
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char x[30], y[30];
//     fgets(x, sizeof(x), stdin);
//     fgets(y, sizeof(y), stdin);

//     int compare = strcmp(x, y);

//     // x < y
//     if(compare < 0) {
//         fputs(x, stdout);
    
//     // y < x
//     } else if(compare > 0) {
//         fputs(y, stdout);
    
//     // x == y
//     } else {
//         fputs(x, stdout);
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    char x[30], y[30];
    scanf("%s %[^\n]s", x, y);

    int xLen = strlen(x);
    int yLen = strlen(y);
    
    // x > y Length wise
    if(xLen > yLen) {
        for(int i = 0; y[i] != '\0'; i++) {
            if(x[i] < y[i]) {
                // x < y
                printf("%s\n", x);
                return 0;
            } else if(x[i] > y[i]) {
                // x > y
                printf("%s\n", y);
                return 0;
            }
        }

        // x == y till now, now length is fact so y < x
        printf("%s\n", y);
    
    // x < y Length wise
    } else if (xLen < yLen) {
        for(int i = 0; x[i] != '\0'; i++) {
            if(x[i] < y[i]) {
                // x < y
                printf("%s\n", x);
                return 0;
            } else if(x[i] > y[i]) {
                // x > y
                printf("%s\n", y);
                return 0;
            }
        }

        // x == y till now, now length is fact so x < y
        printf("%s\n", x);

    } else {
        for(int i = 0; x[i] != '\0'; i++) {
            if(x[i] < y[i]) {
                // x < y
                printf("%s\n", x);
                return 0;
            } else if(x[i] > y[i]) {
                // x > y
                printf("%s\n", y);
                return 0;
            }
        }

        // x == y till now, now length is fact so x == y
        printf("%s", x);
    }

    return 0;
}