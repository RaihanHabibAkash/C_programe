/*
The value in main diagonal is equal. And other value must be 0.
if the main diagonal value all are 0, it's still scaler matrix.
4 0 0
0 4 0
0 0 4
*/

#include <stdio.h>

int main() {
    int n;
    printf("Give me the size of the Square matrix\n");
    scanf(" %d", &n);

    // 2D array
    int arr[n][n];

    // Taking value of the 2D array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf(" %d", &arr[i][j]);
        }
    }

    // Checking if the array is Scaler matrix,
    /*
    v 0 0
    0 v 0
    0 0 v
    */
    int element = arr[0][0];
    int flag = 1; // Flag true
    for(int i = 0; i < n; i++) { // 1st for loop start
        for(int j = 0; j < n; j++) { // 2nd for loop start
            if(i == j) { // Main diagonal
                if(arr[i][j] != element) { // checking if the main diagonal value is eql to each other
                    flag = 0; // if the value match and flag false
                    break;
                } // 2nd if ends

            } else { // Other diagonal
                if(arr[i][j] != 0) { // checking if the other diagonal value == 0
                    flag = 0; // Flag false and out of loop
                    break;
                }
            } // else ends
        } // 2nd loop ends

        // If the flag is false, out of the main loop as well
        if(flag == 0) {
            break;
        }

    } // 1st loop ends
    

    // Checking and printing
    if(flag == 0) {
        printf("Not Scaler Matrix\n");
    } else {
        printf("Scaler Matrix\n");
    }

    return 0;
}