// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[20] = "Hellow",
//         b[20] = "World ";
    
//     int lengthA = strlen(a);
//     int lengthB = strlen(b);
//     int finalLength = lengthA + lengthB;

//     for(int i = lengthB, j = 0; i < finalLength; i++, j++) {
//         b[i] = a[j];
//     }

//     b[finalLength] = '\0';

//     printf("%s", b);
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = "Hellow",
        b[20] = "World ";
    
    strcat(b, a);

    printf("%s", b);
    
    return 0;
}