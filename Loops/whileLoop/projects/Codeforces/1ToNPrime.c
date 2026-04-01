/*
J. Primes from 1 to n
time limit per test3 seconds
memory limit per test256 megabytes
Given a number N
. Print all prime numbers between 1 and N
 inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number N
 (2≤N≤103)
.

Output
Print all prime numbers between 1 and N
 (inclusive) separated by a space.

Example
InputCopy
10
OutputCopy
2 3 5 7 
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // If n = 2 there is only one number 
    if(n == 2) {
        printf("%d ", n);
    // there are more than one number
    } else {
        // Cloning the number x, for first while loop
        int x = 2;

        // For n numbers
        while(x <= n) {
            int isPrime = 1;
            // for second while loop
            int temp = 2;

            // Checking if prime or not
            while(temp < x) {
                if(x % temp == 0) {
                    isPrime = 0;
                    break; 
                } else {
                    ++temp;
                }
            }

            if(isPrime == 1) {
                printf("%d ", x);
            }

            ++x;
        // Second while loop end
        }
    // Else end
    }
    
    return 0;
}