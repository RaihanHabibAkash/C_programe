/*
P. Log2
time limit per test1 second
memory limit per test256 megabytes
Given a number N
. Print ⌊log2(N)⌋
.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤1018)
.

Output
Print the answer required above.

Examples
InputCopy
1
OutputCopy
0
InputCopy
8
OutputCopy
3
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

#include <stdio.h>
#include <math.h>

double log2N(double n) {
    // base case
    if(n < 2) return 0;

    // recurtion
    return 1 + log2N(n / 2);
}

int main() {
    // Taking input
    double number;
    scanf("%lf", &number);

    // Sending in recurtion
    double res = log2N(number);
    
    // Converting into floor
    int result = floor(res);

    // Printing
    printf("%d", result);

    return 0;
}