/*
You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the matrix after doing the following operations.

Firstly you will swap all the elements of the first column with the elements of the last column.

After that you will swap the elements of the first row with elements of the last row.

Input Format

First line will contain N and M the row and column respectively.
Then the 2D matrix will be given.
Constraints

2 <= N,M <= 100
0 <= Element <= 100
Output Format

Print the matrix after the required operations.

Sample Input 0

3 4
1 2 3 4
5 6 7 8
6 5 4 2
Sample Output 0

2 5 4 6
8 6 7 5
4 2 3 1
*/

// https://www.hackerrank.com/contests/b6-final-c/challenges/swap-in-matrix/problem

#include <stdio.h>

int main() {
    // Taking input
    int n, m;
    scanf("%d %d", &n, &m);

    // Taking array input
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Swaping first and last column
    for(int i = 0; i < n; i++) {
        int temp = arr[i][0];
        arr[i][0] = arr[i][m - 1];
        arr[i][m - 1] = temp;
    }

    // Swaping first and last rows
    for(int i = 0; i < m; i++) {
        int temp = arr[0][i];
        arr[0][i] = arr[n - 1][i];
        arr[n - 1][i] = temp;
    }

    // Printing 2D Array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}