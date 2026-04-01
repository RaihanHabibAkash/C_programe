// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int a;
//     scanf("%d", &a);

//     if(a >= 50) {
//         printf("Boy 4");
//     } else {
//         printf("Boy 2\n");
//         printf("Give %d Taka back", 50 - a);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int day = 1, hour = 10;

    switch(day) {
        case 1:
            switch(hour) {
                case 10:
                    printf("Saturday 10");
                    break;
                case 9:
                    printf("Saturday 9");
                    break;
                default:
                    printf("Not hour");  
            }
            break;
        case 2:
            printf("Sunday");
            break;
        case 3: 
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wed");
            break;
        case 6:
            printf("Thus");
            break;
        case 7:
            printf("fri");
            break;
        default:
            printf("Wrong");
    }
    return 0;
}