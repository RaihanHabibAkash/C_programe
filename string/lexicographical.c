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
    char str1[20], str2[20];

    // Taking inputs
    scanf("%s", str1);
    scanf("%s", str2);

    // Length of the first string
    int index1 = 0;
    while(str1[index1] != '\0') {
        // For while loop
        ++index1;
    }

    // Length of the second string
    int index2 = 0;
    while(str2[index2] != '\0') {
        // For while loop
        ++index2;
    }

    int smallIndex = 0;

    // First element length is less
    if(index1 < index2) {
        // Checking characters
        for(int i = 0; i < index1; i++) {
            if(str1[i] < str2[i]) {
                smallIndex = 2;
                break;
            } else if(str2[i] < str1[i]) {
                smallIndex = 3;
                break;
            } else {
                // Both are eqal but a length small
                smallIndex = 2;
            }
        }

    // Second element length is less
    } else if(index1 > index2) {
        // Checking characters
        for(int i = 0; i < index2; i++) {
            if(str1[i] < str2[i]) {
                smallIndex = 2;
                break;
            } else if(str2[i] < str1[i]) {
                smallIndex = 3;
                break;
            } else {
                // Both are eqal but b length small
                smallIndex = 3;
            }
        }

    // First lenght == Second length
    } else {
        // Checking characters
        for(int i = 0; i < index1; i++) {
            if(str1[i] < str2[i]) {
                smallIndex = 2;
                break;
            } else if(str2[i] < str1[i]) {
                smallIndex = 3;
                break;
            } else {
                // Both are eqal
                smallIndex = 1;
            }
        }
    }


    // Cheking which string is less
    if(smallIndex == 2) {
        printf("%s\n%s", str1, str2);
    } else if(smallIndex == 3) {
        printf("%s\n%s\n", str2, str1);
    } else if(smallIndex == 1) {
        printf("%s == %s\n", str1, str2);
    }

    return 0;
}