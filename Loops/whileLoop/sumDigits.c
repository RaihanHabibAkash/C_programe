/*
Given a number N. Now, Print the summation of all digits.

Sample Input
13305

Sample Output
12

Note:
1 + 3 + 3 + 0 + 5 = 12 .
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf(" %d", &n);

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d\n", sum);

    return 0;
}