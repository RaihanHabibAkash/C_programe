/*
Call by value:
Main function variable value don't change, because we are working with copy 
of the value.

Call by refarence:
Main function variable value will change, because we are sending address of the variable
and updating it.
*/

#include <stdio.h>

void func(int x, int *y) {
    x *= 10;
    *y *= 10;
    printf("%d %d\n", x, *y);
}

int main() {
    int a = 10,
        b = 20;
    // a == call by value
    // b == call by refarence
    func(a, &b);
    
    // A vlue not changed
    printf("%d %d\n", a, b);
}