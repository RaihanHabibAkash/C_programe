/*
#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);
    printf("%d", a);
    
    Memory location of a =>
    printf("%d", &a);
    

    return 0;
}
*/
/*
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d", a, b, c);

    return 0;
}
*/

// #include <stdio.h>

// int main() {
//     float a;
//     scanf("%f", &a);
//     printf("%.2f", a);

//     return 0;
// }


#include <stdio.h>

int main() {
    int a, b, c;
    char d;

    scanf("%d %d %d %c", &a, &b, &c, &d);
    printf("a = %d b = %d c = %d d = %c", a, b, c, d);

    return 0;
}