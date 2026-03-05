/*
This year abul is giving his cusins salami.

But one of his cusin has came to him and complained that he gave everyone different amounts of salami, so some got more and some got less.

So abul decided he will give everyone equal salami. He told his cusins to find out who got the maximum salami and to tell him how much more everyone else need to get equal salami. They came to you for help. Now you have an array containing N integers, the amount of salami of each cusin.

You need to print N integers in a line, for each salami amount, the difference of it from the maximum amount.

Input Format

The first line of input will contain an integer N.
The second line of input will contain N integers.
Constraints

1 <= N <= 100000
Each salami amount will be positive and less than 10^9
Output Format

Print N space seperated integers, i_th of which will be the difference of the maximum amount and i_th cusin's salami amount.
Sample Input 

5
5 2 8 3 4
Sample Output 

3 6 0 5 4
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n, max = INT_MIN;
    scanf(" %d", &n);

    // Inserting
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);

        // Finding max
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Diffrence from max
    int dif;
    for(int i = 0; i < n; i++) {
        dif = max - arr[i];
        printf("%d ", dif);
    }
    return 0;
}