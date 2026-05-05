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
#include <string.h>

int main() {
    int n;
    printf("How many words you want to compare\n");
    scanf("%d", &n);

    char str[n][50];

    printf("Give me %d strings to compare\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    // Comparing strings
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(str[i], str[j]) == 0) printf("'%s' and '%s' are equal\n", str[i], str[j]);
            else printf("'%s' and '%s' are not equal\n", str[i], str[j]);
        }
    }

    return 0;
}