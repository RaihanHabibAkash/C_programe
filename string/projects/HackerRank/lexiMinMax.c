/*
\You have already solved a problem where you had to find minimum and maximum value among 3 integer numbers.

Now you will be given 3 strings you have to find lexicographically minimum and maximum string among them.

Input Format

The first line will contain 3 strings, S1, S2, S3 containing only lowercase letters.

Constraints

1 <= |S1|, |S2|, |S3| <= 1000

Output Format

In the first line print the lexicographically minimum string.

In the second line print the lexicographically maximum string.

Sample Input 0

abc def ghi
Sample Output 0

abc
ghi
*/

// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/lexic-min-max

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1005],
         str2[1005],
         str3[1005];

    scanf("%s %s %s", str1, str2, str3);

    int cmp1 = strcmp(str1, str2);
    int cmp2 = strcmp(str1, str3);
    int cmp3 = strcmp(str2, str3);

    // For min
    // a < b
    if(cmp1 < 0) {
        // a < c
        if(cmp2 < 0) {
            printf("%s\n", str1);
        } else {
        // c < a
        printf("%s\n", str3);
        }
    // b < a 
    } else {
        // b < c
        if(cmp3 < 0) {
            printf("%s\n", str2);
        } else {
        // c < b
            printf("%s\n", str3);
        }
    }

    // For max
    // a > b
    if(cmp1 > 0) {
        // a > c
        if(cmp2 > 0) {
            printf("%s\n", str1);
        } else {
        // c > a
        printf("%s\n", str3);
        }
    // b > a 
    } else {
        // b > c
        if(cmp3 > 0) {
            printf("%s\n", str2);
        } else {
        // c > b
            printf("%s\n", str3);
        }
    }

    return 0;
}