#include <stdio.h>

int main() {
    // char str[] = "My Name is Raihan Habib \"Akash\"";
    char str[] = "My Name is Rai\\0han Habib \"Akash\"";
    printf("%s", str);
    return 0;
}