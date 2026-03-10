// #include <stdio.h>

// int main() {
//     char str[] = "5";

//     // Deleting asci value
//     printf("%d", str[0] - '0');
//     return 0;
// }

#include <stdio.h>

int main() {
    // the number of string
    char str[20];
    printf("Give the number of String\n");
    scanf("%s", str);

    // Getting the length of the string
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    // Converting String into Number
    int number = 0;
    for(int i = 0; i < length; i++) {
        int digit = str[i] - '0';
        number = number * 10 + digit;
    }

    // printing digit number
    printf("The Integer number is %d\n", number);

}