/*
Problem Statement

You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.

Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.

Input Format

First line will contain N, the row and column of the square matrix.
Then the N * N sized matrix will be given where the values are integer only.
Constraints

1 <= N <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is unit matrix, otherwise output "NO" without the quotation marks.
Sample Input 0

3
1 0 0
0 1 0
0 0 1
Sample Output 0

YES

Sample Input 1

5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 1
0 0 0 1 0
0 0 0 0 1
Sample Output 1

NO
*/

// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/unit-matrix

#include <stdio.h>

int main() {
    // Taking input
    int length;
    scanf("%d", &length);

    // declearing array
    int arr[length][length];

    // Inserting value
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Flag for checking
    int flag = 1;

    // Checking for unit matrix
    for(int i = 0; i < length; i++) {
        for(int j = 0; j < length; j++) {
            // Prime Diagonal
            if(i == j) {
                // Not unit matrix, so break out of the loop
                if(arr[i][j] != 1) {
                    flag = 0;
                    break;
                }

            // Non prime diagonal
            } else {
                // Not unit matrix
                if(arr[i][j] != 0) {
                    flag = 0; 
                    break;
                }
            }

        // 2nd loop end
        }

        // If flag = 0, out of the loop
        if(flag == 0) {
            break;
        }

    // 1st loop end
    }

    if(flag == 0) printf("NO\n");
    else printf("YES\n"); 

    return 0;
}