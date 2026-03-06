/*
N. Char
time limit per test0.25 seconds
memory limit per test64 megabytes
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
InputCopy
a
OutputCopy
A
InputCopy
A
OutputCopy
a
*/
#include <stdio.h>

int main() {
    char n;
    scanf(" %c", &n);

    int remain, digit;

    // A - Z => 26 letters
    if(n >= 65 && n <= 90) {
        remain = n - 65;

        // getting the digit
        digit = 97 + remain;

        // a - z
    } else if(n >= 97 && n <= 122) {
        remain = n - 97;
        
        // getting the digit
        digit = 65 + remain;
    }

    printf("%c", digit);
}

/*
#include <stdio.h>

int main() {
    char n;
    scanf(" %c", &n);

    if(n >= 'A' && n <= 'Z')
    printf("%c", n + 32);
    else if(n >= 'a' && n <= 'z')
    printf("%c", n - 32);
}
*/