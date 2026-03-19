#include <stdio.h>
#include <math.h>

int main() {
    double a = 10.000001;
    double b = 10.9999;
    double c = 10.5000;

    printf("%lf\n", ceil(a));
    printf("%lf\n", floor(b));
    printf("%lf\n", round(c));
    printf("%lf\n", sqrt(25));
    printf("%lf\n", pow(3, 2));
    // sqrt using pow()
    printf("%lf\n", pow(9, 0.5));
}