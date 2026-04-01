/*
Problem Statement

You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.

Input Format

First line will contain N and M the number of row and column respectively and X,the number of integers we are going to search.
Then the 2D matrix will be given.
Then X lines will contain X integer Numbers.
Constraints

2 <= N,M,X <= 100
0 <= Element <= 1000
0 <= Number <=1000
Output Format

For each of the x integers print a single line with how many times that number have appeared.

Sample Input 0

2 3 3
1 2 5
2 6 4
2
6
7
Sample Output 0

2
1
0
*/

// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/count-in-matrix

#include <stdio.h>

int main() {
    // Taking input
    int rows, cols, numbers;
    scanf("%d %d %d", &rows, &cols, &numbers);

    // Declearing freq array
    int freq[1005] = {0};

    // Inserting value in the 2D array
    int arr[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);

            // increment of the freq array
            freq[arr[i][j]]++;
        }
    }

    // how many times x hasbeen in the array
    while(numbers--) {
        // taking input of x
        int x;
        scanf("%d", &x);

        // Printing numbers
        printf("%d\n", freq[x]);
    }

    return 0;
}