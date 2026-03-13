/*
Problem Statement

You will be given two positive integer N and K. You need to print from 1 to K, and you need to do this N times.

Please look at the sample input output.

Input Format

Input will contain N and K.
Constraints

1 <= N,K <= 100
Output Format

You need to print fron 1 to K, N times. Don't forget to print new line after printing from 1 to K.
Sample Input 0

3 5
Sample Output 0

1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
Sample Input 1

7 4
Sample Output 1

1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/

// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/do-it-5

#include <stdio.h>

int main() {
    int k, n;
    scanf(" %d %d", &n, &k);

    while(n--) {
        for(int i = 1; i <= k; i++) {
            printf("%d ", i);
        }

        printf("\n");
    } 
    return 0;
}