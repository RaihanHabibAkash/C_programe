/*
A. Summation
time limit per test2 seconds
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.

Examples
InputCopy
4
7 2 1 3
OutputCopy
13
InputCopy
3
-1 2 -3
OutputCopy
2
Note
Second Example :

-1 + 2 + -3 = -2 and it absolute is 2 so the answer is 2.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Taking input
    int a;
    scanf("%d", &a);

    // Converting into pointer
    int *x = &a;

    // Decleared array
    int *arr = (int *)calloc(*x, sizeof(int));

    // Hudai Resizing it
    int *temp = (int *)realloc(arr, *x * sizeof(int));

    // If realloc fail return out of the function
    if(temp == NULL) {
        printf("realloc failed\n");
        free(arr);
        return 1;
    }

    // If no error temp == arr
    arr = temp;

    // Inserting value
    for(int i = 0; i < *x; i++) {
        scanf("%d", (arr + i)); 
    }

    // Sumation
    long long sum = 0;
    for(int i = 0; i < *x; i++) {
        sum += *(arr + i);
    }

    // Abulute sum
    if(sum < 0) {
        sum *= -1;
    }

    // Printing
    printf("%lld", sum);

    free(arr);


    return 0;
}