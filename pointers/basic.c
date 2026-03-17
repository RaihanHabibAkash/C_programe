// Pointer is a variable that stores the memory location of others variable.

// #include <stdio.h>

// int main() {
//     int a = 10;

//     // Pointer
//     int *b = &a;

//     // Address of the a
//     printf("%d\n", &a);

//     // Address of the a, using pointer
//     printf("%d\n", b);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a = 10;

//     // Pointer
//     int *b = &a;

//     // Updating
//     *b = 6;

//     // Accessing value using pointer
//     int val = *b;

//     printf("%d %d", a, val);
    
//     return 0;
// }


#include <stdio.h>

int main() {
    int a = 10;

    // Pointer
    int *b = &a;

    printf("%d\n", a);

    // Updating
    *b = 6;

    printf("%d\n", a);
    
    return 0;
}