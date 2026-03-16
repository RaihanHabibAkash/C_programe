/*
T. Matrix
time limit per test1 second
memory limit per test256 megabytes
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.

Example
InputCopy
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6
OutputCopy
22
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <math.h>

int main() {
    // Taking input
    int n;
    scanf(" %d", &n);

    // Taking 2D array inputs
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }

    // Sum var
    int mainDiagonal_sum = 0,
        secDiagonal_sum = 0;

    // Checking value and sum of the both diagonals
    
    // First loop starts
    for(int i = 0; i < n; i++) {
        // Second loop starts
        for(int j = 0; j < n; j++) {
            // Checking main diagonal, and sum
            if(i == j) {
                mainDiagonal_sum += arr[i][j];
            }

            // Checking for secendery diagonal, and sum
            if(i + j == n - 1) {
                secDiagonal_sum += arr[i][j];
            }


        // Second loop ends 
        }
    // First loop ends
    }

    // Absolute sum using method
    // int dif = abs(mainDiagonal_sum - secDiagonal_sum);


    // Absoulute sum without method
    int dif = mainDiagonal_sum - secDiagonal_sum;
    if(dif < 0) {
        dif *= -1;
    }

    // Priting the dif
    printf("%d\n", dif);

    return 0;
}