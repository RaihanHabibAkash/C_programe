/*
The lowest number that is devided by 2, 3, 5 is 
2 x 3 x 5 = 30.
*/

#include <stdio.h>

int main() {
    
    for(int i = 100; i <= 300; i++) {
        printf("%d not\n", i);

        if(i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
            printf("%d is the number\n", i);
            break;    
        }
    } 

    return 0;
}