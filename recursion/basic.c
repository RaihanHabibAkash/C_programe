#include <stdio.h>

void func2() {
    printf("Inside func2\n");
}
 
void func1() {
    printf("Before calling function (inside func1)\n");

    func2();

    printf("After calling function (inside func1)\n");
}

int main() {
    printf("Before calling function in main\n");

    func1();

    printf("After calling function in main\n");

    return 0;
}