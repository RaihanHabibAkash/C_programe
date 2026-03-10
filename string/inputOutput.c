// #include <stdio.h>

// int main() {
//     // char str[10] = {'A', 'p', 'p', 'l', 'e', '\0'};
//     char str[10] = "AB CD";

//     for(int i = 0; i < 5; i++) {
//         printf("%c", str[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     char str[10] = "AB CD";
//     // s = string
//     printf("%s", str);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     char str[20];

//     scanf("%[^\n]s", str);
//     printf("%s", str);
    
//     return 0;
// }


#include <stdio.h>
int main() {
    char str[20];

    fgets(str, sizeof(str), stdin);

    // printf("%s", str);

    fputs(str, stdout);
    
    return 0;
}