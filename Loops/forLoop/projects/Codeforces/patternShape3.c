/*
W. Shape3
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input
Only one line containing number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
InputCopy
4
OutputCopy
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Note
Don't print any extra spaces after symbol " * ".
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // t for star printing
    for(int i = 1, t = 1; i <= n; i++, t += 2) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }

        for(int k = 1; k <= t; k++) {
            printf("*");
        }
        printf("\n");
    }

    // For reverse pyramid
    for(int i = 1, t = n * 2; i <= n; i++, t -= 2) {
        
        // space print
        for(int k = 1; k < i; k++) {
            printf(" ");
        }

        // Star print
        for(int j = 1; j < t; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int k = 1;

//     for(int i = 1; i <= n; i++, k += 2) {
//         int space = n - i;

//         // While runs until 0
//         while(space--) {
//             printf(" ");
//         }

//         for(int j = 1; j <= k; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     k -= 2;

//     for(int i = n; i >= 1; i--, k -= 2) {
//         int space = n - i;

//         while(space--) {
//             printf(" ");
//         }

//         for(int j = 1; j <= k; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }



//     return 0;
// }