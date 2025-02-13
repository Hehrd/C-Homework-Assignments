#include <stdio.h>
#include "quadraticroots.h"

int main() {
    
    int a1 = 1, b1 = -3, c1 = 2;
    QuadraticRootsResult result1;
    result1 = findroots((long double)a1, (long double)b1, (long double)c1);
    if (result1.norealroots) {
        printf("No real roots\n");
    } else {
        printf("Roots: x1 = %lf, x2 = %lf\n", result1.x1, result1.x2);
    }

    float a2 = 1.0, b2 = -2.5, c2 = 1.0;
    QuadraticRootsResult result2;
    result2 = findroots((long double)a2, (long double)b2, (long double)c2); 
    if (result2.norealroots) {
        printf("No real roots\n");
    } else {
        printf("Roots: x1 = %lf, x2 = %lf\n", result2.x1, result2.x2);
    }

    double a3 = 1.0, b3 = -4.0, c3 = 4.0;
    QuadraticRootsResult result3;
     result3 = findroots((long double)a3, (long double)b3, (long double)c3);
    if (result3.norealroots) {
        printf("No real roots\n");
    } else {
        printf("Roots: x1 = %lf, x2 = %lf\n", result3.x1, result3.x2);
    }

    return 0;

}