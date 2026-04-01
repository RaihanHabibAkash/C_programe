/*
You will be given 3 strings each of same length consisting of only small case letters. In one operation you can change a letter to any other letter of one of the strings.

You have to find out the minimum number of operations to make all 3 strings same.

Input Format

The input will contain 3 Strings.

Constraints

1 <= Length of each string <= 100

Output Format

Print an integer, the minimum number of operations to make the strings same.

Sample Input 0

train
candy
bread
Sample Output 0

9
*/

// https://www.hackerrank.com/contests/b6-final-c/challenges/same-same-but-different-1-1

#include <stdio.h>
#include <string.h>

int checkString(char i, char j, char k) {
    if(i == k && i ==j) {
        return 0;
    } else if(i == j || i == k || j == k) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    // Taking output
    char lekha1[110],
         lekha2[110],
         lekha3[110];
    scanf("%s %s %s", lekha1, lekha2, lekha3);
    
    // Len of the string
    int len = strlen(lekha1);

    // Cheking count
    int count = 0;
    for(int i = 0; i < len; i++) {
        count += checkString(lekha1[i], lekha2[i], lekha3[i]);
    }

    // Printing count
    printf("%d\n", count);

    return 0;
}