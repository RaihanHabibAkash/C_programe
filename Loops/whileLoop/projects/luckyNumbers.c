/*
M. Lucky Numbers
time limit per test1 second
memory limit per test256 megabytes
Given two numbers A
 and B
. Print all lucky numbers between A
 and B
 inclusive.

Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.

For example: numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.

Input
Only one line containing two numbers A
 and B
 (1≤A≤B≤105)
.

Output
Print all lucky numbers between A
 and B
 inclusive separated by a space. If there is no lucky number print -1.

Examples
InputCopy
4 20
OutputCopy
4 7 
InputCopy
8 15
OutputCopy
-1
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int isLucky = 0;

    for(int i = a; i <= b; i++) {
        int temp = i;
        int lucky = 1;

        // Checking lucky or not
        while(temp > 0) {
            if(temp % 10 == 4 || temp % 10 == 7) {
                temp /= 10;
            } else {
                lucky = 0;
                break;
            }
        }

        // printing lucky and checking there is an lucky number
        if(lucky == 1) {
            printf("%d ", i);
            isLucky = 1;
        }
    }

    if(isLucky == 0) {
        printf("-1");
    }
    
    return 0;
}