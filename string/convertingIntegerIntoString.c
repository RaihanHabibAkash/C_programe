#include <stdio.h>

int main() {
    // Scaning integet number
    int number;
    scanf(" %d", &number);
    
    // Var string
    char str[20];

    int index = 0;
    while(number > 0) {
        // Storing value
        str[index] = (number % 10) + '0';
        ++index;

        // For while loop
        number /= 10;
    }

    // Placing null at the end
    str[index] = '\0';

    // String is in the reverse order, so correctin it
    for(int i = 0, j = index - 1; i <= j; i++, j--) {
        // Swaping
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    // Printing
    printf("%s", str);
    

    return 0;
}