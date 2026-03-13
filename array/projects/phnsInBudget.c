/*
Abul is plannig to by a smartphone. He has N smartphones available to buy of different prices. But he wants to buy a smartphone in a range between X and Y.

He has given you the price list.

Can you tell him how many smartphones are available in that price range.

Input Format

The first line of input will contain 3 integers N, X, Y, the number of phones and the range.

The next line will contain N numbers p1, p2, p3, ... , pn, the prices of N phones.

Constraints

1 <= N <= 10^5
1 <= pi, X, Y <= 10^9
Output Format

Print an integer, the number of phones available in his prefered range.

Sample Input 0

10 4 8
8 7 2 3 1 10 25 8 13 5
Sample Output 0

4
*/

// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/price-range

#include <stdio.h>

int main() {
    // Taking iputs
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    // Taking inputs for array
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }

    // Swaping if y < x
    if(y < x) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Counting range
    int mobiles = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x && arr[i] <= y) {
            mobiles++;
        }
    }

    // Printing mobiles
    printf("%d", mobiles);

    return 0;
}