/*
No Repeatation
Problem
Submissions
Leaderboard
Discussions
You will be given an Array of N integers, print the count of numbers that have appeared only once.

Input Format

The first line will contain an integer N.
The next line will contain N integers.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 10^5
Output Format

Print a single integer,the count of numbers that have apeared only once in the array.

Sample Input 0

10
1 4 3 3 5 2 4 6 2 3
Sample Output 0

3
Explanation 0

In the sample only 1, 5, 6 have apeared only once in the array.So, the count is 3.
*/

// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/no-repeatation

#include <stdio.h>

// Freq array decleare
int freq[100000 + 100] = {0};

int main() {
    // Taking length of the array
    int length;
    scanf("%d", &length);

    // Taking input for array
    int arr[length];
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);

        // Increment of freq array
        freq[arr[i]]++;
    }

    // Checking and counting of the number came 1 time in the array
    int count = 0;
    for(int i = 1; i <= 100000; i++) {
        // Increament cout
        if(freq[i] == 1) {
            count++;
        }
    }

    // Printing the count
    printf("%d\n", count);

    return 0;
}