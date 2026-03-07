/*
G. Factorial
time limit per test2 seconds
memory limit per test64 megabytes
Given a number N. Print the factorial of number N.

Input
First line contains a number T (1 ≤ T ≤ 15) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 20)

Output
For each test case print a single line contains the factorial of N.

Example
InputCopy
2
5
3
OutputCopy
120
6
Note
Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point.

Thus, factorial seven is written 7!, meaning 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040 .

Factorial zero is defined as equal to 1.

In first test case for N = 5 , 5! = 1 * 2 * 3 * 4 * 5 = 120 so the answer is 120.

In Second test case for N = 3 , 3! = 1 * 2 * 3 = 6 so the answer is 6.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        long long factorial = 1;

        // vlaue = 0, factorial 0 is define as 1
        if(t == 0) {
            factorial = 1;
        } else {
            for(int j = n; j > 0; j--) {
                factorial *= j;
            }
        }

        printf("%lld\n", factorial);
    }


    return 0;
}