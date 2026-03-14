#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    printf("Give me a string\n");
    scanf(" %s", string);

    int length = strlen(string);

    // Freq array decleare
    int freq[26] = {0};

    // Placing in freq array
    for(int i = 0; i < length; i++) {
        // Taking char
        char ch = string[i];
        // Char asci value
        int index = ch - 'a';
        // placing freq[value = 1]
        freq[index] = 1;
    }


    // Priting freq array with count
    int count = 0;
    for(int i = 0; i < 26; i++) {
        // How many char are there
        count += freq[i];
        // Character
        int ch = i + 'a';
        // Printing
        printf("%c val is %d\n", ch, freq[i]);
    }

    printf("There are %d character\n", count);

    return 0;
}
