// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[20], b[20];
//     // Scaning inputs
//     scanf("%s", a);
//     scanf("%s", b);
    
//     // Comparing a, b
//     int cmp = strcmp(a, b);

//     printf("%d\n", cmp);

//     // a < b
//     if(cmp < 0) {
//         printf("%s\n%s\n", a, b);
//     // b < a
//     }  else if(cmp > 0) {
//         printf("%s\n%s\n", b, a);
//     } else {
//         printf("%s == %s\n", a, b);
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    // Taking how many words i want to compare
    int n;
    printf("How many words you want to compare\n");
    scanf("%d", &n);

    // For Multiple string
    char str[n][50];

    // Taking inputs of n
    printf("Give me %d string to compare\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    // Comapreing
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            

            // Not done yet

        }
    }
}