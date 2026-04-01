/*
Babul likes to read books. He has N books and they take different times to finish each. He has arranged all the books in a order of finishing time to read them. So the first book will need the least time to finish and the last book will take the most time. He as T time to read.

He has given how a list of N number in increasing order. The numbers are the times to finish the books.

You have to tell him how many books he can finish reading at most in T time.

Input Format

The first line of input will contain two integers N and T, the number of books and the time he has in total. The next line will contain N numbers in increasing order.

Constraints

1 <= N <= 10^5
0 <= T <= 10^9
Output Format

Print a single integer, the maximum number of books babul can finish reading in T time.

Sample Input 0

10 33
1 3 4 6 8 10 12 15 23 36
Sample Output 0

6
*/

// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/book-reading-4

#include <stdio.h>

int main() {
    int time,
    numOfBooks;

    // Taking inputs
    scanf(" %d %d", &numOfBooks, &time);

    // Array of books
    int arr[numOfBooks];

    // Taking books list
    for(int i = 0; i < numOfBooks; i++) {
        scanf(" %d", &arr[i]);
    }

    // Finishing the books
    long long totalTime = 0;
    int books = 0;
    for(int i = 0; i < numOfBooks; i++) {
        if(totalTime + arr[i] <= time) {
            books++;
            totalTime += arr[i];
        }
    }

    // Printing
    printf("%d\n", books);
}