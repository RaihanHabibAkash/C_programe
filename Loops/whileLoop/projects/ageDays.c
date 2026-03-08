/*
R. Age in Days
time limit per test1 second
memory limit per test256 megabytes
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.

Examples
InputCopy
400
OutputCopy
1 years
1 months
5 days
InputCopy
800
OutputCopy
2 years
2 months
10 days
InputCopy
30
OutputCopy
0 years
1 months
0 days
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);

    // Var for days, monts and years 
    int years = 0,
        months = 0,
        days = 0;

    if(n >= 365) {
        while(n >= 365) {
            years += 1;
            n -= 365;
        }
    } 
    if(n >= 30) {
        while(n >= 30) {
            months += 1;
            n -= 30;
        }
    } 
    if(n >= 1) {
        days += n;
    }

    printf("%d years\n%d months\n%d days\n", years, months, days);

    return 0;
}