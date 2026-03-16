/*
S. Search In Matrix
time limit per test2 seconds
memory limit per test64 megabytes
Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

Input
First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

Last line contains a number X (0 ≤ X ≤ 105) described above.

Output
Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".

Examples
InputCopy
2 2
1 2
3 4
3
OutputCopy
will not take number
InputCopy
2 2
1 2
3 4
10
OutputCopy
will take number
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <stdio.h>

int main() {
    // Taking input for 2D array length cols * rows
    int cols, rows;
    scanf(" %d %d", &cols, &rows);

    int arr[cols][rows];

    // Taking value for 2D array
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Taking the value for match
    int x;
    scanf("%d", &x);

    // Flag for output
    int flag = 0;

    // Matching if the value is in the 2D array

    // 1st loop start
    for(int i = 0; i < cols; i++) {
        // 2nd loop starts
        for(int j = 0; j < rows; j++) {
            /* Checking if the val is int the array, If so
            flag = true || 0 and break out of the 2nd loop */
            if(arr[i][j] == x) {
                flag = 1;
                break;
            // Conditon ends
            }
        // 2nd loop ends 
        }
        
        // If the flag is false || 0, break out of the 1st loop
        if(flag == 1) {
            break;
        // Condtion ends
        }
    
    // 1st loop ends
    }


    // Output
    if(flag == 1) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}