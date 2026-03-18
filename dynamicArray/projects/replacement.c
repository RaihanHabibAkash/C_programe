/*
C. Replacement
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the array after the replacement and it's values separated by space.

Example
InputCopy
5
1 -2 0 3 4
OutputCopy
1 2 0 1 1 
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Taking input of length of array
    int length;
    scanf("%d", &length);

    // Converting into pointer
    int *p = &length;

    // Memory allocation for array
    int *arr = (int *)calloc(*p, sizeof(int));

    // If memory allocation failed out of the array
    if(arr == NULL) {
        printf("calloc failed\n");
        return 1;
    }
    

    // Inserting value in array
    for(int i = 0; i < *p; i++) {
        // (&) not need beacuse (arr + i) is pointing a location
        scanf("%d", (arr + i));
    }

    // Changing value for pos = 1, neg = 2
    for(int i = 0; i < *p; i++) {
        // For positive
        if(*(arr + i) > 0) {
            *(arr + i) = 1;
        
        // For negetive
        } else if(*(arr + i) < 0) {
            *(arr + i) = 2;
        }

    // Loop ends
    }

    // Hudai resizing, for pra
    int *temp = (int *)realloc(arr, *p * sizeof(int));

    // realloc failed out of the programe
    if(temp == NULL) {
        printf("realoc failed\n");
        free(arr);
        return 1;
    }

    // If success arr == temp
    arr = temp;

    // Printing
    for(int i = 0; i < *p; i++) {
        printf("%d ", *(arr + i));
    }

    // Dealocation of the array
    free(arr);

    return 0;
}