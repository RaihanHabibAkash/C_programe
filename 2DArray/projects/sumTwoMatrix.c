/*
N. Sum of a Matrix
time limit per test1 second
memory limit per test256 megabytes
Given two matrices A and B of size R * C. Print the summation of A and B.

Note: Solve this problem using recursion.

Input
First line contains two numbers R and C (1 ≤ R, C ≤ 100). number of rows and number of columns respectively.

Next R lines will contain C numbers ( - 100 ≤ Ai, j ≤ 100) matrix A numbers.

Next R lines will contain C numbers ( - 100 ≤ Bi, j ≤ 100) matrix B numbers.

Output
Print the summation result.

Example
InputCopy
2 3
1 2 3
4 5 6
1 3 5
7 9 11
OutputCopy
2 5 8
11 14 17
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

#include <stdio.h>

int main() {
    // Taking input of lenght
    int n, m;
    scanf("%d %d", &n, &m);

    // Declaring 2D arrays
    int a[n][m];
    int b[n][m];

    // Taking input for 1st 2D Array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // For 2nd 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Getting sum into 1st array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] += b[i][j];
        }
    }

    // Printing 1st array after sum
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}