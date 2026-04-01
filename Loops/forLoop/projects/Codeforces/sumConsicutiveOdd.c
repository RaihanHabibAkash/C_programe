/*
S. Sum of Consecutive Odd Numbers
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

Output
Print the sum of all odd numbers between X and Y (excluding X and Y).

Example
InputCopy
3
5 6
10 4
4 9
OutputCopy
0
21
12
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

// Consicutive => Dharabahik (1, 2, 3, 4).
#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        // Sum will freash in every loop
        int sum = 0;

        // Taking output to exclusive
        scanf("%d %d", &a, &b);

        // a < b, sum of the odd numbers
        if(a < b) {
            for(int j = a + 1; j < b; j++) {
                if(j % 2 != 0) {
                    sum += j;
                }
            }

        // a > b, sum of the odd numbers
        } else {
            for(int j = a - 1; j > b; j--) {
                if(j % 2 != 0) {
                    sum += j;
                }
            }
        }
        
        // Printing the sum
        printf("%d\n", sum);
    }

    return 0;
}