/*
You will be given N integer Numbers.

You will initialy declare an array with length 1.

After taking input of each numbers you will insert the number in the end and increase the array length by one.

Finally, print all N numbers in the array in a single line, separated by spaces.

Note: The solution must be implemented with dynamic array.

Input Format

The first line will contain an integer N, the number of elements.
The second line will contain N integers.
Constraints

1 <= N <= 1000
1 <= Each integers <= 10^9
Output Format

Print the array of N integers in a single line, with all the elements separated by spaces.

Sample Input 0

5
1 4 2 6 9
Sample Output 0

1 4 2 6 9
*/

// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/dynamic-array-7

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Taking input of numbers
    int numbers;
    scanf(" %d", &numbers);
    // Converting into pointer hudai
    int *num = &numbers;

    // Memory alocation of an array size of 1
    int *arr = (int *)calloc(1, sizeof(int));

    // Place every input at the end of the array and increase the array by 1
    for(int i = 0; i < *num; i++) {
        // Taking input at the end of the array
        scanf("%d", (arr + i));
 
        // Invreasing array by 1
        int *temp = (int *)realloc(arr, (2 + i) * sizeof(int));

        // Error in the realloc
        if(temp == NULL) {
            printf("realloc failed\n");
            free(arr);
            return 1;
        }

        // If success arr == temp
        arr = temp;
    // loop end
    }

    // Printing the value
    for(int i = 0; i < *num; i++) {
        printf("%d ", *(arr + i));
    }

    // Dealocation of the memory
    free(arr);


    return 0;
}