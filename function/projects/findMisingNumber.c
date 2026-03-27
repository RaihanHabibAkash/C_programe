/*
Given the multiplication of four numbers and three of those numbers, find the missing number.

Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

Input Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
Constraints

1 < T <= 100000
0 <= M <= 10^18
1 <= A, B, C <= 10^6
Output Format

Print the missing number. Don't forget to print a new line after it.
Sample Input 0

4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15
Sample Output 0

5
-1
-1
0
Sample Input 1

3
20 5 1 1
18 2 3 3
0 10 20 30
Sample Output 1

4
1
0
*/

// https://www.hackerrank.com/contests/b6-final-c/challenges/find-the-missing-number-11-3

#include <stdio.h>

long long dividedBy(long long *num, int *x, int *y, int *z) {
    if(*num % *x == 0) {
        *num /= *x;
        if(*num % *y == 0) {
            *num /= *y;
            if(*num % *z == 0) {
                return *num /= *z;
                

            } else return -1;
        } else return -1;
    } else return -1;
}

int main() {
    // Taking input of test cases
    int cs;
    scanf("%d", &cs);

    while(cs--) {
        long long number;
        int a, b, c;
        scanf("%lld %d %d %d", &number, &a, &b, &c);

        printf("%lld\n", dividedBy(&number, &a, &b, &c)); 
    }

    return 0;
}