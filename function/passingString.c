// #include <stdio.h>
// #include <ctype.h>

// void ToUpper(char x[]) {
//     x[0] = toupper(x[0]);
//     printf("%s", x);
// }

// int main() {
//     char str[20] = "akash";
//     ToUpper(str);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

void func(char x[], char y[]) {
    y[0] = 'B';
    x = strcpy(x, y);
}

int main() {
    char a[20] = "akash";
    char b[20] = "Apple";
    
    func(a, b);

    printf("%s %s\n", a, b);

    return 0;
}