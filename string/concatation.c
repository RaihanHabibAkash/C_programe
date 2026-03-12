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

char concat[1000000];
int main() {
    int n;

    // How many numbers want to concat
    printf("How many string you want to concat\n");
    scanf("%d", &n);

    int temp = n;
    int length = 0;
    while(temp > 0) {
        char x[1000];

        fgets(x, sizeof(x), stdin);

        int newLen = strlen(x);
        int fullLen = length + newLen;
        
        for(int j = length, i = 0; j < fullLen; i++, j++) {
            concat[j] = x[i];
        }

        length += newLen;
        concat[length] = '\0';
        --length;

        temp--;
    }

    printf("%s", concat);
    
    return 0;
}