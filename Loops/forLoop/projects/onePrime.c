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
#include <stdbool.h>

int main() {
    int n;
    bool isPrime = true;
    
    scanf("%d", &n);
    if(n == 1) {
        printf("NO");
    }

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}