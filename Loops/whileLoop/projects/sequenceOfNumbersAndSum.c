/*
R. Sequence of Numbers and Sum
time limit per test1 second
memory limit per test256 megabytes
Given multiple lines each line contains two numbers N and M.

For each line print a single line contains:

The numbers between N and M inclusive separated by single space.
The message " sum =".
The summation of all numbers between N and M inclusive.
Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.

For more clarification see the examples below.

Input
The input contains multiple line.

Each line contains two numbers N and M (-100 ≤ N, M ≤ 100).

It's guaranteed that the last line of the input will contain a number that is less than or equal to zero.

Output
For each line print the answer according to the required above in a single line.

Examples
InputCopy
5 2
5 7
5 -1
OutputCopy
2 3 4 5 sum =14
5 6 7 sum =18
InputCopy
5 2
6 3
5 0
OutputCopy
2 3 4 5 sum =14
3 4 5 6 sum =18
Note
M may be greater than N and Vice Versa.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <stdio.h>
int main() {
    int x, y;

    while(scanf(" %d %d", &x, &y) != EOF) {
        long long sum = 0;

        if(x <= 0 || y <= 0) {
            // Terminate the while loop
            break;
        }

        // x < y
        if(x <= y) {
            for(int i = x; i <= y; i++) {
                printf("%d ", i);
                sum += i;
            }
        // y < x
        } else {
            for(int i = y; i <= x; i++) {
                printf("%d ", i);
                sum += i; 
            }
        }

        // Printing the sum
        printf("sum =%lld\n", sum);

    }

    return 0;
}
