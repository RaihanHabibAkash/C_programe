#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "Raihan Akash",
        b[20] = "Def";

    printf("%s %s\n", a, b);
    // strcpy(destination, source);
    
    // strcpy(b, a);

    strcpy(b, "Hello");

    printf("%s %s\n", a, b);

    return 0;
}