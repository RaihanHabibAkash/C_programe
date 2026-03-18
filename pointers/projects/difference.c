/*
You will be given two integer numbers A and B , you need to print the difference between these two numbers. Remember, difference is always positive.

Note: Use pointers to solve this Problem.

Input Format

Input will contain two integers A and B.
Constraints

0 <= A <= 100
0 <= B <= 100
Output Format

Print a single integer representing the absolute difference between A and B.
Sample Input 0

6 10
Sample Output 0

4
*/

// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/difference-16-1

#include <stdio.h>

int main() {
    int a, b;
    // Converting into pointer
    int *x = &a,
        *y = &b;

    // Taking input
    scanf("%d %d", x, y);

    // Getting diffrence
    int dif = *x - *y;

    // If negetive converting into positive
    if(dif < 0) dif *= -1;

    printf("%d", dif);
    
    return 0;
}