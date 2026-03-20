/*
R. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

NOTE: Solve it using recursion.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (1 ≤ Ai ≤ 109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
InputCopy
5
1 3 2 3 1
OutputCopy
YES
InputCopy
4
1 2 3 4
OutputCopy
NO
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

// #include <stdio.h>

// int isPalindrome(int a[], int i, int j) {
//     //base case
//     if(i > j) return 1; 

//     return a[i] == a[j] && isPalindrome(a, i + 1, j - 1);
// }

// int main() {
//     // Taking length
//     int len;
//     scanf("%d", &len);

//     // Inserting value in recurtion
//     int arr[len];
//     for(int i = 0; i < len; i++) {
//         scanf("%d", &arr[i]);
//     }

//     if(isPalindrome(arr, 0, len - 1)) printf("YES\n");
//     else printf("NO\n"); 

//     return 0;
// }


#include <stdio.h>

int isNotPalindrome(int a[], int i, int j) {
    //base case
    if(i > j) return 0; 

    return a[i] != a[j] || isNotPalindrome(a, i + 1, j - 1);
}

int main() {
    // Taking length
    int len;
    scanf("%d", &len);

    // Inserting value in recurtion
    int arr[len];
    for(int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    if(isNotPalindrome(arr, 0, len - 1)) printf("NO\n");
    else printf("YES\n"); 

    return 0;
}