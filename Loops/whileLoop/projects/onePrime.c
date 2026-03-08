/*
H. One Prime
time limit per test3 seconds
memory limit per test64 megabytes
Given a number X. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number X (2 ≤ X ≤ 105).

Output
print "YES" if the number is prime and "NO" otherwise.

Examples
InputCopy
7
OutputCopy
YES
InputCopy
15
OutputCopy
NO
Note
First Example :

7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

Second Example :

15 not is prime because it is divisible by 3 ,5, so the answer is NO.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <stdio.h>

int main() {
    int x;
    scanf(" %d", &x);
    int isLucky = 1;

    if(x == 2 || x == 3) {
        isLucky = 1;
    } else {
        // Lucky number is only devided by itself
        int temp = x - 1;

        while(temp > 1) {
            
            // Checking if it's not lucky
            if(x % temp == 0) {
                isLucky = 0;
                break;
            // if lucky dont change the var
            } else {
                --temp;
            }
        }
    }

    if(isLucky == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}